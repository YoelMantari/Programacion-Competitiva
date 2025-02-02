//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;


int fastpow(int a,int b){

	if(b == 0) return 1;
	int x = fastpow(a,b/2);
	x*=x;
	if(b%2 == 1) x = x*a;
	return x;
}

int fastpow2(int a, int b) {
    if (b == 0) return 1;
    int x = fastpow(a, b / 2);
    return x * x * (b % 2 ? a : 1);
}

int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif

	cout<<fastpow2(5,3);
	return 0;
}

