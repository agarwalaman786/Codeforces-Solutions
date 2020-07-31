#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int arr[10] = {0};
		for(ll int i=0;i<s.length();i++)
			arr[s[i]-'0']++;
		int cnt = 0;
		for(ll int i=0;i<s.length()-1;i++)
			if(s[i]==s[i+1])
				cnt++;
		cout<<(s.length()-2 - cnt)<<endl;
	}
}