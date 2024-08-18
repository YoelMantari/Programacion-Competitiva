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

int commonFactors(int a, int b) {
	int c=min(a,b);
	int d=max(a,b);
	int cont=0;
	for(int i=1;i*i<=c;i++){
		if(c%i==0){
			if(d%i==0)cont++;
			if(d%(c/i)==0)cont++;
			if(i*i==c and (d%i==0 or d%(c/i)==0))cont--;
		}
	}
	return cont; 
}


void solve(){
	int a,b; cin>>a>>b;

	cout<<commonFactors(a,b);
		

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