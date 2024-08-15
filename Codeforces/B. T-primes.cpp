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
#define mstr(r) for(auto i:r){cout<<i<<" ";}cout<<endl;
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;

bool prime(ll n){
	if(n==1)return false;
	ll j=sqrt(n);
	if(j*j==n){
		for(int i=2;i*i<=j;i++){
			if(j%i==0)return false;	
		}
		return true;
	}
	return false;
}


void solve(){
	
	int n; cin>>n;
	ll w;

	for(int i=0;i<n;i++){
		cin>>w;
		if(prime(w))cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}


}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Problem Set Competitiva/output.txt","w",stdout);
#endif
fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}