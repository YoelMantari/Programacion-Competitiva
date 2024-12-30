//#include<bits/stdc++.h>
#include<iostream>
#include <vector>
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
	
	int a; cin>>a;
	vector<int> r(a);
	fi(i,0,sz(r),1)cin>>r[i];	

	int cont = 1;
	int maxi = 0;
	int val = r[0];
	for(int i = 1; i<r.size();i++){
		if(val<=r[i])cont++;
		else {
			maxi = max(maxi,cont);
			cont=1;
		}
		val = r[i];
	}	
	maxi=max(maxi,cont);
	cout<<maxi<<endl;
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