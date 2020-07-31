#include<bits/stdc++.h>
#define ll long long
using namespace std;


//vector<pair<int,int>>v1;
vector<int>v2;

bool isPrime(int n) 
{ 
  
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[2*n];
		v2.clear();
		for(int i=0;i<2*n;i++)
			cin>>arr[i];
		int flag = 0;
		int vis[2*n] = {0};
		//sort(arr,arr+2*n);
		int res = 1;
		for(int i=0;i<2*n;i++){
			for(int j=0;(j<2*n && j!=i);j++){
				if(v2.size()==0){
					if((vis[i]==0 && vis[j]==0) && !isPrime(arr[i]+arr[j])){
						v2.push_back(arr[i]+arr[j]);
					res = arr[i]+arr[j];
					vis[i]=1;
					vis[j]=1;
					cout<<(i+1)<<" "<<(j+1)<<endl;
					if(v2.size()==n-1){
						flag = 1;
						break;
					}
				}
				}
				else if((vis[i]==0 && vis[j]==0) && __gcd(res,(arr[i]+arr[j]))>1){
					v2.push_back(arr[i]+arr[j]);
					res = __gcd(res,(arr[i]+arr[j]));
					vis[i]=1;
					vis[j]=1;
					cout<<(i+1)<<" "<<(j+1)<<endl;
					if(v2.size()==n-1){
						flag = 1;
						break;
					}
				}
			}
			if(flag==1)
				break;
		}
	}
	
	return 0;
}
