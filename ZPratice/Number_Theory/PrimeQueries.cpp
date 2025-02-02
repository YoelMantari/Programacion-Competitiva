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

int criba_query(vi &r,int n,int a,int b){
	r[0]=r[1]=0;

	for(int i=2;i*i<=n;i++){
		if(r[i]){
			fi(j,i*i,n+1,i){
				r[j]=0;
			}
		}
	}
	

	vi aux(n+1,0);

	fi(i,1,n+1,1){
		aux[i]=aux[i-1] + (r[i]?1:0);
	}

	int val=aux[b]-aux[a-1];

	return val;
}



void solve(){
	int n=10000;
	vi r(n+1,1);

	int a,b; cin>>a>>b;

	cout<<criba_query(r,n,a,b)<<endl;

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