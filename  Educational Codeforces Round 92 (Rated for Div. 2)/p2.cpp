#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int solve(ll int *arr, int l, int r, int score, int left, int dir, int tsteps, int z, map<string, int>& mp)
{
	if(l>r)
		return 0;
	int mx = 0;
	if(tsteps<=0)
		return arr[l];
	string key = to_string(l) + to_string(left) + to_string(dir) + to_string(tsteps) + to_string(z);
	if(mp.find(key)!=mp.end())
		return mp[key];

	if((l-1>=0 && left<2) && z>0){
		int mvleft = solve(arr,l-1,r,score, left+1 , 1, tsteps-1, z-1,mp) + arr[l];
		if((l+1)<=r){
		  int mvright = solve(arr,l+1,r,score, left, 0, tsteps-1,z,mp) + arr[l];
		  mx = max(mvleft,mvright);
		}
    }
    else if(l+1<=r){
    	int mvright = solve(arr,l+1,r,score, left, 0, tsteps-1,z,mp) + arr[l];
    	mx = mvright;
    }

    score = score + mx;
    mp[key] = score;
    return mp[key];
}


int main(){
	int t;
	cin>>t;
	while(t--){
		ll int n,k,z;
		cin>>n>>k>>z;
		ll int *arr = new ll int[n];
		for(ll int i=0;i<n;i++)
			cin>>arr[i];
		int score = 0;
		int cnt = 0;
		int mvleft  =0;
		int left = 0;
		map<string, int>mp;
		int prof = solve(arr, 0, n-1, score, mvleft, left, k, z, mp);
		cout<<prof<<endl;
	}
}