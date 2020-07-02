#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll int a,b,n,m;
		cin>>a>>b>>n>>m;
		if((a+b)<(n+m)){
			cout<<"No"<<endl;
			continue;
		}
		if(min(a,b)<m){
			cout<<"No"<<endl;
		}
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}