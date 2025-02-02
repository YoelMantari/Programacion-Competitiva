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


int partition(vi &arr,int ini,int fi){

	int pivot=arr[fi];
	int i=ini-1;
	fi(j,ini,fi,1){
		if(arr[j]>pivot)
			swap(arr[++i],arr[j]);
	}
	swap(arr[i+1],arr[fi]);
	return i+1;
}

void quicksort(vi &arr,int ini,int fi){

	if(ini>=fi)return;

	int p=partition(arr,ini,fi);

	quicksort(arr,ini,p-1);
	quicksort(arr,p+1,fi);
}



void solve(){
	vi r={3,2,1,-2,4,0,1,3,2};
		quicksort(r,0,r.size()-1);

		for(auto i:r)
			cout<<i<<" ";
		

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