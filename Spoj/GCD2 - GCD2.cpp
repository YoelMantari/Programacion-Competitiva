#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

#define sz(a) a.size()


using namespace std;

int reduccion(string q,int b){

	int res=0;
	for(int i=0;i<sz(q);i++){
		res=((10*res)%b + (q[i]-48)%b)%b;
	}

	return res;
}

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
	int a; cin>>a;
	string b; cin>>b;
	if(a==0) cout<<b;
	else if(b=="0")cout<<a;
	else cout<<mcd(a,reduccion(b,a));

	cout<<endl;

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