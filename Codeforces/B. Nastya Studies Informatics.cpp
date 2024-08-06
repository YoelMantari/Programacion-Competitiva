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


int mcd(int a,int b){
	int res;
	while(b){
		res=a%b;
		a=b;
		b=res;
	}
	return a;
}


void solve(){
	
	int l,r; cin>>l>>r;
	int gcd,lcm; cin>>gcd>>lcm;
	int coprime=lcm/gcd;
	int cont=0;
	if(lcm%gcd!=0){cout<<0;return;}
	for(int i=1;i*i<=coprime;i++){
		if(coprime%i==0){
			int val=coprime/i;
			if(l<=i*gcd and i*gcd<=r and l<=val*gcd and val*gcd<=r and mcd(i,val)==1){
				if(i*i==coprime)cont++;
				else cont+=2;
			}
		}	
	}

	cout<<cont;
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