#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;



void solve(){

string q; cin >> q;
q += "1";
string res = "";
for(int i = 0; i < q.size()-1; i++){
    if(q[i] == '-' and q[i+1] == '-') res += "2", i++;
    else if(q[i] == '-' and q[i+1] == '.') res += "1", i++;
    else if(q[i] == '.') res += "0";
 }

 cout << res;

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




