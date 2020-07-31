#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==1 && b==1)
			cout<<1<<endl;
		else if(a%2==0){
			cout<<(a/2)*b<<endl;
		}
		else{
			int x = (a/2)*b + ceil((b*1.0)/2);
			cout<<x<<endl;
		}
	}
	return 0;
}
