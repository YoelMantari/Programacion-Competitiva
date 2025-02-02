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

//Verificar si una matriz esta ordenada

 bool sorted(int arr[],int n){

 	if(n==0 or n==1)return true;
	if(arr[0]>arr[1])return false;
	return sorted(arr+1,n-1);
}

bool sorted2(vi q,int n,int i){

	if(i==n or n==1)return true;
	if(q[i]>q[i+1])return false;
	return sorted2(q,n,i+1);
}

void solve(){
	
	int n; cin>>n;
	//int *arr=new int [n];
	vi arr(n); 
	fi(i,0,n,1)cin>>arr[i];
	//if(sorted(arr,n))cout<<"yes";
	if(sorted2(arr,n,0))cout<<"yes";
	else cout<<"no";

	
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