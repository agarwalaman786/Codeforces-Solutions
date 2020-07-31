#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(d<b || c<a)
			cout<<0<<endl;

		else if((a-c)==0 || (b-d)==0)
			cout<<1<<endl;
		else
			cout<<(abs(a-c) + abs(b-d))<<endl;

	}
	return 0;
}
