#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		string s;
		cin>>s;
		int cnt = 0;
		stack<char>st;
		for(int i=0;i<n;i++){
			if(s[i]=='('){
				st.push('(');
			}
			if(s[i]==')'){
				if(st.empty()!=1){
					st.pop();
				}
			}
		}
		if(st.empty()!=1)
			cnt+=st.size();
		cout<<cnt<<endl;
	}
	return 0;
}