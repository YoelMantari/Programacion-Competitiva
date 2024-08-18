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

bool hasGroupsSizeX(vector<int>& r) {
	int tam=r.size();
	if(tam==1)return false;
    map<int,int>w;
    for(int i=0;i<tam;i++) w[r[i]]++;
	int mcd=0;
    for(auto i:w){
    	mcd=__gcd(mcd,i.second);
    	if(mcd==1)return false;
    }

    return true;

}


void solve(){
	
	int n; cin>>n;
	vi r(n);
	fi(i,0,n,1) cin>>r[i];
	if(hasGroupsSizeX(r))cout<<"true";
	else cout<<"false";
		

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