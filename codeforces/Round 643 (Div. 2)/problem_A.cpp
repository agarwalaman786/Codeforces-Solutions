#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll int n,k;
		cin>>n>>k;
		if(k==1)
			cout<<n<<endl;
		else{
		ll int num = n;
		int flag = 0;
		for(ll int i=0;i<k-1;i++){
			vector<int>arr;
			ll temp = num;
			while(temp>0){
				arr.push_back(temp%10);
				temp=temp/10;
			}
			int mx = *max_element(arr.begin(),arr.end());
			int mn = *min_element(arr.begin(),arr.end());
			if(mn==0 || mx==0)
			{
				flag =1;
				cout<<num<<endl;
				break;
			}
			num = num+ mx*mn;
		}
		if(flag==0)
		   cout<<num<<endl;
	}
	}
	return 0;
}