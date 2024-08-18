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

int prime(int n){
	if(n==2)return true;
	if(n%2==0 or n<2)return false;

	for(int i=3;i*i<=n;i+=2){
		if(n%i==0)return false;
	}
	return true;
}

int diagonalPrime(vector<vector<int>>& nums) {
        
	int tam=nums.size();
	int maxi=0;
	fi(i,0,tam,1){
		if(prime(nums[i][i]))maxi=max(maxi,nums[i][i]);
		if(prime(nums[i][tam-i-1]))maxi=max(maxi,nums[i][tam-i-1]);
	}


	return maxi;
}


void solve(){
	int n; cin>>n;

	vector<vector<int>>r={{1,2,3},{5,6,7},{9,10,12}};			

	cout<<diagonalPrime(r);
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