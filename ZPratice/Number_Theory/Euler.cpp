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
int n=1e5;
void euler(){

	vct<bool> prime(n+1,true);
	vi toil(n+1);

	for(int i=2;i*i<=n;i++){
		if(prime[i]){
			for(int j=i*i;j<=n;j+=i) prime[j]=false;
		}
	}

	iota(all(toil),0);

	for(int i=2;i<=n;i++){
		if(prime[i]){
			for(int j=i;j<=n;j+=i){
				toil[j]/=i;
				toil[j]*=(i-1);
			}
		}
	}

	for(int i=1;i<=10;i++){
		cout<<i<<" "<<toil[i]<<endl;
	}
}


void solve(){
	
		euler();

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