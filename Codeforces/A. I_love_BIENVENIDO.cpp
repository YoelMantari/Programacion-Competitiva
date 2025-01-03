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
	int n ; cin>>n;

	vector<int> r(n);

	for(int i = 0; i<n;i++)cin>>r[i];

	int maxi = r[0];
	int mini = r[0];
	int cont = 0;

	for(int i = 1; i<n; i++){

		if(maxi<r[i]){
			maxi = r[i];
			cont++;
		}
		if(mini>r[i]){
			mini=r[i];
			cont++;
		}
	}
	cout<<cont<<endl;

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