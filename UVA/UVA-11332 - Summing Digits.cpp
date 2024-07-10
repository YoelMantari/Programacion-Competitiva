#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
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

int sumarnum(int n){
	int cont=0;
	while(n){
		cont+=(n%10);
		n/=10;
	}

	return cont;
}

int sumardiv(int n){
	if(n==0)return 0;
	return sumardiv(n/10) + n%10;
}

void sumarrep(int n){

	if(sumardiv(n)<=9){cout<<sumardiv(n)<<endl;return;}
	sumarrep(sumardiv(n));
}




void solve(){
	
	int n;
	while(cin>>n and n!=0){
		sumarrep(n);
	}

}


int main(){


	int t=1;
	while(t--){
		solve();
	}

	return 0;
}