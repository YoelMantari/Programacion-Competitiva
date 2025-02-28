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
#define ingr(r) fi(i,0,sz(r),1)cin>>r[i]; 

using namespace std;



void solve(){
	
	string p; cin>>p;
	string h; cin>>h;	

	unordered_map<char,int> hp,hh;

	int tamp=p.size();
	int tamh=h.size();

	if(tamp>tamh){
		cout<<"NO"<<endl;
		return;
	}

	for(auto i:p) hp[i]++;


	for(int i = 0;i<tamp;i++) hh[h[i]]++;

		if(hp==hh){
			cout<<"YES"<<endl;
			return;
		}
	for(int i=tamp;i<tamh;i++){
		hh[h[i]]++;
		hh[h[i-tamp]]--;

		if(hh[h[i-tamp]]==0)
			hh.erase(h[i-tamp]);

		if(hp==hh){
			cout<<"YES"<<endl;
			return;
		}
	}

	
	cout<<"NO"<<endl;
	return;
	

}


int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
fast
	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}