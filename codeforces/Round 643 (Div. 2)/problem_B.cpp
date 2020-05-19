#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int count=0;
		int j=0;
		while(j<n){
			int p=arr[j];
			int k=j+p-1;
			if(k<n && p==arr[k]){
				count++;
				k++;
				j=k;
			}
			else
				j++;
		}
		cout<<count<<endl;
	}
	return 0;
}