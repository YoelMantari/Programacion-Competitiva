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


int countBeautifulPairs(vector<int>& nums) {
	int n=nums.size();
	int cont=0;
	vector<int> r(10,0);

	for(int i=0;i<n;i++) r[nums[i]%10]++;

	for(int i=0;i<n;i++){
		r[nums[i]%10]--;
		
		string w=to_string(nums[i]);

		int firstnumb=(w[0]-'0');

		for(int i=1;i<10;i++){
			if(__gcd(firstnumb,i)==1)cont+=r[i];
		}

	}

	return cont;
}

void solve(){
	
	int n; cin>>n;
	vector<int> r(n);
	fi(i,0,n,1)cin>>r[i];
	cout<<countBeautifulPairs(r)<<endl;
	
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