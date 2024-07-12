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


string sumk(string q,int k){
	string aux="";
	while(k--)aux+=q;
	return aux;
}


ll sumardiv(string q,int i){
	ll cont =0;
	fi(i,0,q.size(),1){
		cont+=q[i]-48;
	}
	return cont;
}


void sumarrep(string q,int k){

	if(sumardiv(q,0)<=9){
		int w=sumardiv(q,0);
		if(w*k<=9)cout<<sumardiv(q,0)*k;
		else sumarrep(to_string(w*k),1);
		return;
	}	
	sumarrep(to_string(sumardiv(q,0)),k);
}




void solve(){
	string q; cin>>q;
	int k; cin>>k;							
		sumarrep(q,k);
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
