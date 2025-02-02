//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;

int expo(int a,int b){

	if(b == 0) return 1;
	return a*expo(a, b-1);
}




int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
	
	cout<<expo(2,5);

	return 0;
}

