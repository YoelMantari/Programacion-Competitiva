//#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;


bool arraysort(int arr[],int n){

	if(n==0 or n==1)return true;
	if(arr[0]<arr[1] and arraysort(arr+1,n-1))return true;
	else return false;
}

bool arraysort2(int arr[],int n,int i){

	if(n-1==i)return true;
	if(arr[i]<arr[i+1] and arraysort2(arr,n,i+1))
		return true;
	else return false;
}




int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif

	int arr[]={1,2,3,4};

	cout<<arraysort(arr,4)<<endl;
	cout<<arraysort2(arr,4,0);

	return 0;
}

