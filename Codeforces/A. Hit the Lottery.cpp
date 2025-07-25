#include<bits/stdc++.h>
#include <vector>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> r ={100, 20, 10, 5, 1};

    int cont = 0;
    for(int i = 0; i < r.size(); i++){
        if(r[i] == 1) cont += n;
        else if(i > n) continue;
        else {
            cont += n/r[i];
            n %= r[i];
        }
    }

    cout << cont;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
fast
   int t = 1;
   while(t--){
      solve();
   }
    return 0;
}




