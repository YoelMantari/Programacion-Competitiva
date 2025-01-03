//#include<bits/stdc++.h>
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
	int k,r; cin>>k>>r;

	int val = k%10;
	int res;
	if(val==0 or k==r ){
		cout<<1<<endl;
		return;
	}
	for(int i = 0;i<=1000;i++){
		bool band = (10*i+r)%k;
		if(!band){
			cout<<((10*i+r)/k)%10<<endl;
			return;
		}
	}
	if(val==5){
		cout<<2;return;
	}
	cout<<5<<endl;

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