#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){

    string q; cin >> q;
    int sum = 0;
    for(int i = 0; i < q.size(); i++){
        if(i < 3)
            sum += q[i];
        else
            sum -= q[i];
    }

    if(sum == 0) cout << "YES";
    else cout << "NO";
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




