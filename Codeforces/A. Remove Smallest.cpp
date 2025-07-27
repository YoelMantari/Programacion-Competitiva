#include<bits/stdc++.h>
#include <vector>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> w;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        w.insert(a);
    }

    int primero = *w.begin();
    int ultimo = *w.rbegin();

    int total = ultimo - primero + 1;
    int tam = w.size();

    if(total == tam)
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
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




