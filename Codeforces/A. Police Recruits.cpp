#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(){

    int n; cin >> n;

    int nro_ofi_disp = 0;  //nro de policias dispuestos
    int nro_crimenes = 0;   //nro de criemenes sin atender
    int nro_eventos;    // entrada
    for(int i = 0;i < n; i++){
        cin >> nro_eventos;
        if(nro_eventos < 0 and nro_ofi_disp == 0) nro_crimenes++;
        else if(nro_eventos > 0) nro_ofi_disp += nro_eventos;
        else nro_ofi_disp = max(nro_ofi_disp + nro_eventos, 0);      
    }

    cout << nro_crimenes;
}

void solve2(){
    int n; cin >> n;
    int nro_ofi_disp = 0;
    int nro_crimenes = 0;
    int nro_eventos;

    for(int i = 0; i < n; i++){
        cin >> nro_eventos;
        if(nro_ofi_disp + nro_eventos < 0) nro_crimenes++;
        else nro_ofi_disp += nro_eventos;
    }
    cout << nro_crimenes;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
fast
   int t = 1;
   while(t--){
      solve2();
   }
    return 0;
}




