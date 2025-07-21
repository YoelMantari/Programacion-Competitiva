#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){
    int num; cin >> num;
    int k; cin >> k;
    while(k--){
        int ult_dig = num % 10;

        if(ult_dig != 0) num--;
        else num /= 10;

    }
    cout << num;

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





