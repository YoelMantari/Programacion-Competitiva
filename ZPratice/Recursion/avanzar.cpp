//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;


int avanzar(int x1,int x2){
	if(x1==x2)return 0;
	return avanzar(x1+1,x2)+1;
}


int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
	
	cout<<avanzar(2,15);


	return 0;
}

