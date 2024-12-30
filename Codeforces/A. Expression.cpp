//#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
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
	int a,b,c; cin>>a>>b>>c;

	if(a*b*c==1 or (b!=1 and a*c==1)) cout<<a+b+c;
	else if((a==1 and b==1) or (b==1 and c==1)){
		cout<<2*max(max(a,b),c);
	}		
	else if(a==1)cout<<(a+b)*c;
	else if(b==1){
		if(a<c) cout<<(a+b)*c;
		else cout<<a*(b+c);
	}
	else if(c==1)cout<<a*(b+c);
	else cout<<a*b*c;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}