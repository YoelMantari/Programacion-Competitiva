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

vi euclidesExtend(int a,int b){

	if(b==0) return {1,0,a};
	
	vi res=euclidesExtend(b,a%b);

	int x=res[1];
	int y=(res[0]-(a/b)*res[1]);
	int gcd=res[2];
	return {x,y,gcd};
}

vi euclidesExtendRec(int a,int b){
	int x0=1,y0=0,x1=0,y1=1;

	while(b){
		int q=a/b;
		int r=a%b;

		int tempx=x1;
		int tempy=y1;

		x1=x0-q*x1;
		y1=y0-q*y1;

		x0=tempx;
		y0=tempy;

		a=b;
		b=r;
	}

	return {x0,y0,a};
}


void solve(){
	
	vi aux=euclidesExtendRec(18,30);
	cout<<aux[0]<<aux[1]<<aux[2];
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