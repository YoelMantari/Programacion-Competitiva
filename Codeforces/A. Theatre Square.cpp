#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;



int32_t main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	int n,m,a; cin>>n>>m>>a;

	int w = n%a == 0 ? n/a:(n/a)+1;
	int r = m%a == 0 ? m/a:(m/a)+1;

	cout<<w*r<<endl;

	return 0;
}

