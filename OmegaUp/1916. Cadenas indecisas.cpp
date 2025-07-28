#include<bits/stdc++.h>
#include <cctype>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){

    string q; cin >> q;
    string aux;
    int cont = 0;
    for(int i = 0; i < q.size(); i++){

        if(q[i] == '*'){
            cont++;
            continue;
        }
        if(cont % 2 == 1)
            q[i] = toupper(q[i]);

        aux.push_back(q[i]);
    }

    cout << aux;

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




