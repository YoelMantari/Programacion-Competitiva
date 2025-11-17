#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){

int division; cin >> division;
char div;
if(division >= 1900) div = '1';
else if(division >= 1600 and division <= 1900)
    div = '2';
else if(division >= 1400 and division <= 1599)
    div = '3';
else
    div = '4';

cout << "Division " << div <<endl;

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




