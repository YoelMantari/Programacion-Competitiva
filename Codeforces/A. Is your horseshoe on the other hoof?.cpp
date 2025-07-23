#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){

    int s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;

    set<int> r;
    r.insert(s1);
    r.insert(s2);
    r.insert(s3);
    r.insert(s4);

    int tam = r.size();

    cout<< 4 - tam; 

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




