#include<bits/stdc++.h>
#define ll long long 
using namespace std;

vector<int> createSemiPrimeSieve(int n) 
{ 
    int v[n + 1]; 
  
    for (int i = 1; i <= n; i++) 
        v[i] = i; 
  
    int countDivision[n + 1]; 
  
    for (int i = 0; i < n + 1; i++) 
        countDivision[i] = 2; 
  
    for (int i = 2; i <= n; i++) { 
  
  
        if (v[i] == i && countDivision[i] == 2) { 
            for (int j = 2 * i; j <= n; j += i) { 
                if (countDivision[j] > 0) { 
                    v[j] = v[j] / i; 
  
                    countDivision[j]--; 
                } 
            } 
        } 
    } 
  
    vector<int> res; 
  
    for (int i = 2; i <= n; i++) { 
        if (v[i] == 1 && countDivision[i] == 0) 
            res.push_back(i); 
    } 
  
    return res; 
} 
  

int main(){
	int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		vector<int>fact = createSemiPrimeSieve(n);
		/*for(int i=0;i<fact.size();i++)
			cout<<fact[i]<<" ";
		*/if(fact.size()<3){
			cout<<"NO"<<endl;
			continue;
		}
		else{
			if((fact[0]+fact[1]+fact[2])>=n){
				cout<<"NO"<<endl;
			}
			else{
				ll int sum = 0;
				int cnt =3;
				int flg = 0;
				vector<int>sol;
				for(int i=0;i<fact.size() && cnt>0;i++){
					sum = sum + fact[i];
					cnt--;
					sol.push_back(fact[i]);
					int n1 = sol.size();
					if(cnt==0){
						if((n-sum)==sol[n1-1] || (n-sum)==sol[n1-2] || (n-sum)==sol[n1-3]){
							sum = sum - sol[n1-1];
							sol.pop_back();
							cnt++;
						}
						else if((n-sum)<=0){
							flg = 1;
							break;
						}
						else{
							break;
						}
					}
				}

				/*for(int i=0;i<sol.size();i++)
					cout<<sol[i]<<" ";*/
				if(flg==1 || cnt!=0)
					cout<<"NO"<<endl;
				else if(cnt==0){
					cout<<"YES"<<endl;
					int n1 = sol.size();
					cout<<sol[n1-1]<<" "<<sol[n1-2]<<" "<<sol[n1-3]<<" "<<(n-sum)<<endl;
				}
			}
		}
	}
	return 0;
}