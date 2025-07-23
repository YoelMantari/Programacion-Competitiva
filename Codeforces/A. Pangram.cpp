#include<bits/stdc++.h>
#include <string>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#include <cctype>
using namespace std;

void solve(){
    int n; cin >> n;
    string q; cin >> q;
    set<char> cont;
    for(int i = 0; i < q.size(); i++){
        char aux = q[i];
        cont.insert(tolower(q[i]));
    }

    if(cont.size() == 26)
        cout << "YES";
    else
     cout << "NO";

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




