//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;



int fac(int r){
	if(r == 0)return 1;

	return r*fac(r-1);
}


int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif

	cout<<fac(5)<<endl;


	return 0;
}

