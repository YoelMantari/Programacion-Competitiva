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


bool r[10000000];

int criba(int n){

	r[0]=r[1]=1;

	for(int i=2;i*i<=n;i++){
		if(!r[i]){
			fi(j,i*i,n+1,i) r[j]=1;
		}
	}

	int cont=0;
	for(int i=2;i<=n-2;i++)
		if(!r[i] and !r[i+2])cont++;
		
	return cont;
}


void solve(){
	
	int n; cin>>n;
	cout<<criba(n);
		

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