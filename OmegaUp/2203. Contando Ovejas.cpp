#include<bits/stdc++.h>
#include <iostream>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){

    int n; cin >> n;
    string q; 
    int cont = 0;
    for(int i = 0; i < n; i++){
        cin >> q;
        if(q == "oveja")
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




