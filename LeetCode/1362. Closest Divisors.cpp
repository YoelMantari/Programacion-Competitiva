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

vi r;

void fastfacto(int n){


	int val=sqrt(n);
	for(int i=val;i>=1;i--){
		if(n%i==0) {
			r.pb(i);
			r.pb(n/i);
			break;
		}
	}



}



void solve(){
	int n; cin>>n;

	fastfacto(n+1);
	fastfacto(n+2);

	int val1=r[1]-r[0];
	int val2=r[3]-r[2];

	if(val1<=val2)cout<<r[0]<<" "<<r[1];
	else cout<<r[2]<<" "<<r[3];
	
	cout<<endl;
	r.clear();
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