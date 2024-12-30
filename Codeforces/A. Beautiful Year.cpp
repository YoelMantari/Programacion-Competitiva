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
#define CLEAR(x) memset(x,0,sizeof x);
using namespace std;




bool band(int val){
	vector<int>memo(20,0);
	while(val){
		int t=val%10;
		if(memo[t])return false;
		memo[t]=1;
		val/=10;
	}
	return true;
}

void solve(){
	
	int val; cin>>val;
	++val;
	while(!band(val))++val;

	cout<<val<<endl;

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