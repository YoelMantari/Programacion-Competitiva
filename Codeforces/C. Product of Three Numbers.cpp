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
#define ingr(r) fi(i,0,sz(r),1)cin>>r[i]; 

using namespace std;


void facto(int n){
	map<int,int> w;
	int m=n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0){
				w[i]++;
				n/=i;
			}
		}
	}
	if(n!=1)w[n]++;
	
	auto val=w.begin();
	int a,b,c;
	
	
    if(sz(w)==1 && val->second >= 6){
        cout<<"YES"<<endl;
        a=val->first;
        b=a*a;
        c=m/(a*b);
        cout<<a<<" "<<b<<" "<<c<<endl;
        return;
    }

    if(sz(w)>=2) {
        auto val2=val;
        ++val2;
        if((sz(w)==2 && (val->second + val2->second) >= 4)||(sz(w) >= 3)){
            cout << "YES" << endl;
            a = val->first;
            b = val2->first;
            c = m / (a * b);
            cout << a << " " << b << " " << c << endl;
            return;
        }
    }

    cout << "NO" << endl;

}


void solve(){
	int n; cin>>n;
	facto(n);
	
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