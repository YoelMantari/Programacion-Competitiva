//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;

int Fpairing(int n){

	if(n==1 or n == 0) return 1;

	return Fpairing(n-1)+(n-1)*Fpairing(n-2);
}


int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif

	cout<<Fpairing(5)<<endl;
	return 0;
}

