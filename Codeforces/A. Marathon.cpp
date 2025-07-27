#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <vector>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){

    int a; cin >> a;
    vector<int> r(3); cin >> r[0] >> r[1] >> r[2]; 
    int cont = 0;
    for(int i = 0; i < 3; i++){
        if(a < r[i])
            cont++;
    }
    cout << cont << endl;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
fast
   int t; cin>>t;
   while(t--){
      solve();
   }
    return 0;
}




