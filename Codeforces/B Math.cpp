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


vi facto;



int expo(int n){
	int cont=0;
	while(n!=1){
		n/=2;
		cont++;
	}
	return cont;
}

void fasfacto(int n){

	int cont;
	int val=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) {
			val*=i;
			cont=0;
			while(n%i==0){
				n/=i;
				cont++;
			}
			facto.pb(cont);
		}
	}
	if(n!=1) {
		val*=n;
		facto.pb(1);
	}
	int maxi=*max_element(all(facto));
	int m=maxi&(maxi-1);
	int cont2;
	if(m!=0) {
		while(m) {
			maxi++;
			m=maxi&(maxi-1);
		}
		cont2=expo(maxi)+1;
	}
	else {
		cont2=expo(maxi);
		for(int i=0;i<sz(facto)-1;i++) {
			if(facto[i]!=facto[i+1]){
				cont2++;
				break;
			}
		}
	}	
	cout<<val<<" "<<cont2;

}


void solve(){
	int n; cin>>n;
	if(n==1)cout<<1<<" "<<0;
	else fasfacto(n);
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