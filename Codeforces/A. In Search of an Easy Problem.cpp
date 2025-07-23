#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){
    int n; cin >> n;
    int m;
    int k = 1;
    while(n--){
        cin >> m;
        if(m == 1){
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
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




