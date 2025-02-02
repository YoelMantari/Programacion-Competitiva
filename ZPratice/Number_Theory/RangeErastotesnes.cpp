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

void criba(vi &r,int n){

	r[0]=r[1]=0;

	for(int i=2;i*i<=n;i++){
		if(r[i]){
			fi(j,i*i,n+1,i){
				r[j]=0;
			}
		}
	}

	fi(i,2,n+1,1){
		r[i]=r[i-1]+ (r[i]==1?1:0);
	}


}


void solve(){
	const int w=1000;
	int n,m; cin>>n>>m;

	vi r(w+1,1);

	criba(r,w);

	cout<<r[m]-r[n-1]<<endl;
		

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