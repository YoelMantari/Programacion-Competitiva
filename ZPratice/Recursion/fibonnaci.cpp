//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;



int fibo(int r){

	if(r==0 or r==1)return r;
	return fibo(r-1)+fibo(r-2);
}


int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
	
	cout<<fibo(3)<<endl;

	return 0;
}

