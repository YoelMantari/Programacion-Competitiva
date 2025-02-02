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

const ll m=1e9+7;
const int N=1e5;
int fact[N];

int addm(int x,int y){
	return (x+y)%m;
}

int subm(int x,int y){
	return((x%m-y%m)%m+m)%m;
}

int mulm(int x,int y){
	return ((x%m)*(y%m))%m;
}

int powrm(int x,int y){
	int res=1;
	while(y){
		if(y&1)res=mulm(res,x);
		y/=2;
		x=mulm(x,x);
	}
	return res;
}
int inv(int x){
	return powrm(x,m-2);
}
int divm(int x,int y){
	return mulm(x,inv(y));
}

void factoMod(){
	fact[0]=1;
	for(int i=1;i<N;i++)
		fact[i]=mulm(fact[i-1],i);
}


int ncr(int n,int r){
	return mulm(mulm(fact[n],inv(fact[r])), inv(fact[n-r]));
}

void solve(){
	factoMod();
	cout<<addm(3,5)<<endl;
	cout<<subm(3,5)<<endl;
	cout<<mulm(324,234)<<endl;
	cout<<divm(56,2)<<endl;
	cout<<fact[5]<<endl;
	cout<<ncr(5,2)<<endl;
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