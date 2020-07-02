#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll int t;
	cin>>t;
	while(t--){
		ll int n,r;
		cin>>n>>r;
		if(n>r){
			cout<<r*(r+1)/2<<endl;
		}
		else{
			cout<<n*(n-1)/2 + 1<<endl;
		}
	}
}