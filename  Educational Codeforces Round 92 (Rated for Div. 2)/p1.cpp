#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int l,r;
		cin>>l>>r;
		int flag =0;
		for(ll int i=l;i<=r;i++){
			if(2*i>=l && 2*i<=r){
				cout<<i<<" "<<2*i<<endl;
				flag = 1;
				break;
			}
			else
				break;

		}
		if(flag ==0)
		   cout<<-1<<" "<<-1<<endl;
	}
	return 0;
}
