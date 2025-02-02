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

int modInverse(int a,int m){

	vi res=euclidesExtend(a,m);
	int x=res[0];
	int gcd=res[2];

	if(gcd!=1)return -1; //no existe inverso multiplicativo
	else {
		int ans=(x%m+m)%m;
		return ans;
	}


}


void solve(){
	
	int a,b; cin>>a>>b;
	
	cout<<modInverse(a,b);

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