//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;



void dec(int n){

	if(n==0) return;
	cout<<n<<endl;
	dec(n-1);
}


void inc(int n){

	if(n==0) return;
	inc(n-1);
	cout<<n<<endl;
 
}
int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
	dec(10);
	cout<<endl;
	inc(10);
	return 0;
}

