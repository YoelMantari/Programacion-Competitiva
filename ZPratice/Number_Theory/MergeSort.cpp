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

void mezclar(vi &arr,int ini,int fin){
	
	vi aux;
	int med=(ini+fin)/2;
	int i=ini;
	int j=med+1;
	while(i<=med and j<=fin ){
		if(arr[i]<=arr[j])aux.pb(arr[i++]);
		else aux.pb(arr[j++]);
	}

	while(i<=med)aux.pb(arr[i++]);
	while(j<=fin)aux.pb(arr[j++]);

	j=0;
	fi(i,ini,fin+1,1)arr[i]=aux[j++];
}

void mergeSort(vi &arr,int i,int f){

	if(f<=i) return;
	int med=(i+f)/2;

	mergeSort(arr,0,med);
	mergeSort(arr,med+1,f);
	mezclar(arr,i,f);
}


void solve(){
	
	vi arr={1,3,2,4,1};

	mergeSort(arr,0,sz(arr)-1);

	fi(i,0,sz(arr),1){
		cout<<arr[i]<<" ";
	}
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