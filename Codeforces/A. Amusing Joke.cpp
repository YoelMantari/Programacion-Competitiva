#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){
    string invitado, anfitrion, monton;
    cin >> invitado >> anfitrion >> monton;

    string sum_nombs = invitado + anfitrion;

    map<char, int> nro_nombre, nro_monton;

    for(auto i:sum_nombs){
        nro_nombre[i]++;
    }

    for(auto i:monton){
        nro_monton[i]++;
    }

    if(nro_nombre == nro_monton)
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




