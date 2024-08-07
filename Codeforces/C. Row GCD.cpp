#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
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
#define vin(a) for (auto& i : a) cin >> i

using namespace std;

ll gcd(ll a,ll b){

	ull res;
	while(b){
		res=a%b;
		a=b;
		b=res;
	}

	return a;
}


void solve(){
	
	int n,m; cin>>n>>m;
	vector<ll> ra(n),rb(m);
	vin(ra); vin(rb);

	ull mcd=0;

	fi(i,1,n,1){
		mcd=gcd(mcd,abs(ra[i]-ra[i-1]));
	}

	fi(i,0,m,1){
		cout<<gcd(mcd,ra[0]+rb[i])<<" ";
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