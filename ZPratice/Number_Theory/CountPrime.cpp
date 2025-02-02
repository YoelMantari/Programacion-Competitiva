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
#define mstr(r) for(auto i:r)cout<<i<<" ";
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;

int CountPrime(vi r,int n,int q){

	r[0]=r[1]=0;

	for(int i=2;i*i<=n;i++){
		if(r[i]){
			for(int j=i*i;j<n+1;j+=i){
				r[j]=0;
			}
		}
	}

	vector<int> aux(n+1,0);
	for(int i=2;i<n+1;i++){
		aux[i]=aux[i-1]+(r[i]==1?1:0);
	}
	int val=aux[q-1]-aux[0];
	return val;
}

int countPrimes(int n){
	const int q=5000000;
	vector<int> r(q+1,1);
    return CountPrime(r,q,n);
}


void solve(){
	int q; cin>>q;
	cout<<countPrimes(q);

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