#include<bits/stdc++.h>
#define ll long long 
#define ff first
#define ss second
#define lli long long int
#define mode 1000000007
#define INF 1000000000
#define pb push_back
#define vi vector<int> 
#define vii vector<lli> 
using namespace std;

int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n;
		cin>>n;
		lli *arr = new lli[n];
		for(lli i=0;i<n;i++)
			cin>>arr[i];
		lli cnt1 = 0, cnt2 = 0;
		for(lli i=1;i<n;i++){
			if((arr[i]-arr[i-1])<=0){
				cnt1++;
			}
			else{
				cnt2++;
			}
			
		}
		for(lli i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}