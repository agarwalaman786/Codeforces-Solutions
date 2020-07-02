#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1)
			cout<<0<<endl;
		else{
			int flag = 0;
			int cnt = 0;
			while(1){
				if(n%6==0){
					n=n/6;
					cnt++;
				}
				else if(n%6!=0){
					n = n*2;
					cnt++;
					if(n%6!=0){
						cout<<-1<<endl;
						break;
					}
				}
				if(n==1){
					cout<<cnt<<endl;
					break;
				}
			}
		}
	}
	return 0;
}