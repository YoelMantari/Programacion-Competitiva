#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll>
#define vct vector
#define pb push_back
#define er erase
#define fi(i,a,n,w) for(int i =a;i<n;i+=w)
#define fl(i,a,n,w) for(ll i=a;i<n;i+=w)
#define fr first
#define se second
#define sz(a) a.size()
#define mstr(r) for(auto i:r)cout<<i<<endl;
#define pll pair<ll,ll>
#define pii pair<int,int>
#define ingr(r) fi(i,0,sz(r),1)cin>>r[i]; 

using namespace std;

int m=1e5;
vector<int> prime(m+1,1);
vector<int> res(m+1,0);
void criba(){
	prime[0]=prime[1]=0;
	for(int i=2;i*i<=m;i++){
		if(prime[i]==1){
			prime[i*i]=0;
			for(int j=i*i+i;j<=m;j+=i) {
				if(prime[j]==1) prime[j]=i;
			}
		}
	}
	//mstr(prime);
	for(int i=2;i<=m;i++){
		if(prime[i]!=1 and prime[i]!=0){
			int num=(i/prime[i]);
			int sum=0;
			if(prime[num]==1 or prime[i]*prime[i]==num){
				sum=1+num+i+prime[i];
				res[i]=sum;
			}
		}
	}
	//mstr(res);
}




int sumFourDivisors(vector<int>& nums) {
	  ios::sync_with_stdio(0); cin.tie(0);

    int n=nums.size();
	int sum=0;
    for(int i=0;i<n;i++){
    	sum+=res[nums[i]];
    }


    return sum;
}
void solve(){
	criba();
	int n; cin>>n;
	vi r(n); ingr(r);

	cout<<sumFourDivisors(r);

}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Problem Set Competitiva/output.txt","w",stdout);
#endif
fast
	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}