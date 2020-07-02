#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		cin>>x>>y>>n;
		int num = (n-y)/x;
		cout<<(num*x+y)<<endl;
	}
	return 0;
}