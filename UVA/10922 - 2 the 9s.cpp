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

int mul9(string q){
	int cont=0;
	fi(i,0,sz(q),1) 
		cont+=(q[i]-48);
	return cont;
}
int grad=0;

void grado9(string q){
	grad++;
	if(mul9(q)%9!=0){
		cout<<" is not a multiple of 9.";
		return;
	}
	
	if(mul9(q)<=9){
		cout<<" is a multiple of 9 and has 9-degree "<<grad<<".";
		return;
	}
	grado9(to_string(mul9(q)));
		
	
}

void solve(){
	
	string q;
	
	while(cin>>q and q!="0"){
		cout<<q;grado9(q);cout<<endl;
		grad=0;
	}	

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