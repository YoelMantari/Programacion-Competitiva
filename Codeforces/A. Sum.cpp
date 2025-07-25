#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;

    if(a + b == c) cout << "YES";
    else if(b + c == a) cout << "YES";
    else if(c + a == b) cout << "YES";
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




