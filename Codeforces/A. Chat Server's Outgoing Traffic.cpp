#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;



int32_t main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	string q;
	unordered_set<string> w;
	int totalBytes=0;

	while(getline(cin,q)){
		int lonMensaje=0;
		if(q[0]=='+')w.insert(q.substr(1));
		else if(q[0]=='-')w.erase(q.substr(1));
		else{
			int pos=q.find(":");
			lonMensaje=(q.size()-pos-1)*w.size();
		}

		totalBytes+=lonMensaje;

	}

	cout<<totalBytes;

	return 0;
}

