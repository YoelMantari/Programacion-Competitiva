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

void solve(){
	
	int n,s,m; cin>>n>>s>>m;

	vi li(n),ls(n);
	fi(i,0,n,1) {
		cin>>li[i]>>ls[i];
	}

	int val;

	if(li[0]>=s){cout<<"YES"<<endl;return;}
	
	for(int i =0;i<n-1;i++){
		val=li[i+1]-ls[i];
		if(val>=s ){cout<<"YES"<<endl;return;}
	}

	val=m-ls[n-1];
	if(val>=s)cout<<"YES";
	else cout<<"NO";
	cout<<endl;
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