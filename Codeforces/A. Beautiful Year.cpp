//#include<bits/stdc++.h>
#include<iostream>
#include <map>
#include<vector>
#include<string>

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
	
	string w; cin>>w;
	int val = stoi(w)+1;
	w=to_string(val);
	int tam = w.size();
	bool band;
	while(1){
		band=true;
		map<char,int> r;
		for(int i =0; i<4;i++){
			r[w[i]]++;
		}
		
		for(auto i:r){
			if(i.second>1) {
				val++;
				w=to_string(val);
				band = false;
				break;
			}
		}
		if(band){
			cout<<w;break;
		}
	}

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