#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(n==1){
			cout<<s<<endl;
			continue;
		}
		string s1;
		int i=0;
		while(i<n){
			//cout<<"Hello";
			if(s[i]=='0'){
				s1.push_back('0');
				i++;
			}
			else
				break;
		}
		for(int j=i;j<n-1;j++){
			if(s[j]=='1' && s[j+1]=='0')
			{
				s1.push_back('0');
				break;
			}
		}
		for(int j=n-1;j>=0;j--){
			if(s[j]=='1')
				s1.push_back('1');
			else
				break;
		}
		cout<<s1<<endl;
	}
	return  0;
}