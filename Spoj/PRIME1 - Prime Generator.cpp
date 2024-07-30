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
int tam=100000;

vi primos;
void criba(vi &r,int n){
	r[0]=r[1]=0;
	for(ll i=2;i<=n;i++){
		if(r[i]){
			primos.pb(i);
			fl(j,i*i,n+1,i)
				r[j]=0;
		}
	}
}



void solve2(){
	int n,m; cin>>m>>n;

	vi rangePrimos(n-m+1,1);	
	
	for(int i =0;i<sz(primos);i++){

		if(primos[i]*primos[i]>n) break;


		// si es que el primo r[i] se encuentra en los intervalos de m y n
		int ini=(m/primos[i])*primos[i]; 
		// caso contrario
		if(primos[i]>=m and primos[i]<=n)ini=2*primos[i];

		for(int j=ini;j<=n;j+=primos[i]){
			
			if(j>=m)rangePrimos[j-m]=0;

		}

	}

	for(int i=m;i<=n;i++){
		if(rangePrimos[i-m]==1 and i!=1)
			cout<<i<<endl;
	}
	cout<<endl;

}
bool primo(int n){
	if(n==1)return false;

	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}

	return true;
}

void solve(){
int m,n; cin>>m>>n;

	for(ll i=m;i<=n;i++){
		if(primo(i)){
			cout<<i<<endl;
		}
	}
	cout<<endl;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Problem Set Competitiva/output.txt","w",stdout);
#endif
fast
vi arr(tam+1,1);
	criba(arr,tam);
	int t; cin>>t;
	while(t--){
		solve2();
	}

	return 0;
}