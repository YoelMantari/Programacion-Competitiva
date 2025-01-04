//#include<bits/stdc++.h>
#include<iostream>
#include <set>
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
	
	int n; cin>>n;
	vector<int> r(n);

	for(int i = 0; i<n; i++){
		cin>>r[i];
	}

	if(r[0]!=r[1] and r[0]==r[2])cout<<2;
	else if(r[0]!=r[1] and r[0]!=r[2])cout<<1;
	else{
		set<int> w;
		for(int i = 0; i<n;i++){
			w.insert(r[i]);
			if(w.size()==2){
				cout<<i+1;
				break;
			}
		}
	}
	cout<<endl;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
fast
	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}