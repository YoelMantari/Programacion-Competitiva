//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#define int long long int
using namespace std;


int SubsetSum(vector<int> r,vector<int>w,int i,int sum){


	if(i==r.size()){
		if(sum ==0 ){
			for(auto i:w)
				cout<<i<<" ";
			cout<<endl;
			return 1;
		}
		else
			return 0;
	}
	w.push_back(r[i]);
	int a = SubsetSum(r,w,i+1,sum-r[i]);
	w.pop_back();
	int b =SubsetSum(r,w,i+1,sum);
	return a+b;

}

int SubsetSum2(int arr[],int n,int sum){
	if(n == 0){
		return (sum == 0) ? 1 : 0;
	}

	return SubsetSum2(arr+1,n-1,sum-arr[0])+SubsetSum2(arr+1,n-1,sum);
}

int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif

vector<int> w={1,2,3,4,5};
int q; cin>>q;
vector<int> r;
cout<<"total de formas: "<<SubsetSum(w,r,0,q)<<endl;
int arr[5]={1,2,3,4,5};
cout<<SubsetSum2(arr,5,q);

	return 0;
}

