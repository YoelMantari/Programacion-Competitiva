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

int mcd(int a,int b){
	int aux;
	while(b){
		aux=a;
		a=b;
		b=aux%b;
	}

return a;
}

int recuMcd(int a,int b){
	
	if(!b)return a;
	return recuMcd(b,a%b);
}

int mcm(int a,int b){

return a*b/mcd(a,b);	
}



void solve(){
	
	int a,b; cin>>a>>b;

	cout<<mcm(a,b)<<endl;
	
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