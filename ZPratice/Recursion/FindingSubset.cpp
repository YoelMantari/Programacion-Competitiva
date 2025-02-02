//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include <vector>
#define int long long int
using namespace std;

  
void Subsets(vector<string>&r, string q,string w,int i){

	if(i==q.size()){
		r.push_back(w);
		return;
	}
	Subsets(r,q,w+q[i],i+1);
	Subsets(r,q,w,i+1);
}

void mostrar(vector<string>r){

	for(auto i:r)
		cout<<i<<endl;
}

int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
	vector<string>r;
	string q; cin>>q;

	Subsets(r,q,"",0);
	mostrar(r);	




	return 0;
}

