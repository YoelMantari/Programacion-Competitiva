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

void factorizar(int n){ // complejidad O(N)
	int cont=0;
	fi(i,2,n+1,1){
		while(n%i==0){
			n/=i;
			cont++;
		}
		cout<<i<<" "<<cont<<endl;
		cont=0;
	}
}

void factorizar2(int n){ // tiene complejidad O(sqrt(N))
	int cont=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) {
			cont=0;
			while(n%i==0){
				n/=i;
				cont++;
			}
			cout<<i<<" "<<cont<<endl;
		}
	}
}

//primero tenemos que hallar la criba que es NloglogN y despues
// al hallar la factorizacion tiene complejidad O(logN)
void CribaFactorizar(vi &r,int n,int q){ 

	r[0]=r[1]=0;

	for(int i=2;i*i<=n;i++){
		if(r[i]==1){
			r[i]=i;
			fi(j,i*i,n+1,i){
				if(r[j]==1)r[j]=i;
			}
		}
	}

	
	while(q!=1){
		cout<<r[q]<<" ";
		q=q/r[q];
	}

	


}


void solve(){
	//const int n=10000000;
	int q; cin>>q;
	//vi r(n+1,1);
	//fi(i,0,n+1,1)cout<<r[i]<<" ";
	factorizar2(q);
	//CribaFactorizar(r,n,q);
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