#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;


bool mycompare(int a,int b){
    return a>b;
}

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    vector<int>ans;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>q;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int diff=abs(arr[i]-x);
        q.push({diff,arr[i]});
    }
    while(k--)
    {
        ans.push_back(q.top().second);
        q.pop();
    }
    sort(ans.begin(),ans.end(),mycompare);
    return ans;
}





int32_t main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

vector<int> w = {1,2,3,4,5,6,7};
	
	int k=2;
	int x = 6;

	for(auto i:findClosestElements(w,k,x)){
		cout<<i<<endl;
	}

	return 0;
}

