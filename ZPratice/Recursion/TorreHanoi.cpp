//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;



void Hanoi(int n,char ini,char aux,char fin,int &cont){

	if(n==0) return;

	Hanoi(n-1, ini, fin, aux,cont);
	cout<<ini<<"->"<<fin<<endl; cont++; // mover
	Hanoi(n-1, aux, ini, fin,cont);	//

}





int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif

int cont=0;

Hanoi(3,'A', 'B', 'C', cont);

cout<<cont;

	return 0;
}

