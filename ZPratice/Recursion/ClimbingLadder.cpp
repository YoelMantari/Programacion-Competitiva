//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;


int ClimLadder(int n){

	if(n == 0) return 1;
	if(n < 0) return 0;

	return ClimLadder(n-1) + ClimLadder(n-2) + ClimLadder(n-3);
}



int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif

	cout<<ClimLadder(5)<<endl;


	return 0;
}

