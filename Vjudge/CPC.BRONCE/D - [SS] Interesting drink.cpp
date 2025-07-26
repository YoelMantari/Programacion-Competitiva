#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> pbot(n);
    for(int i = 0; i < n; i++) cin >>pbot[i];

    sort(all(pbot));

    int cdias; cin >> cdias;
    int nromond;
    for(int i = 0; i < cdias; i++) {
        cin >> nromond;
        int it = upper_bound(all(pbot), nromond) - pbot.begin();

        cout << it << endl;
    }




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




