#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int *arr = new int[n];
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]]++;
		}
		int *prr = new int[k];
		for(int i=0;i<k;i++)
			cin>>prr[i];
		map<int,int>:: iterator it;
		ll int sum = 0;
		sort(arr,arr+n,greater<int>());
		sort(prr,prr+k);
		for(int i=0;i<k;i++){
			if(mp[arr[]])
		}

	}
}