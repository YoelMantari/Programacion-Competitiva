#include<bits/stdc++.h>
#include <string>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

bool verificar(map<string, int> w, string q){
    if(w.find(q) != w.end())
        return true;

    return false;
}

string aumentar(string original, int val){
    string aux = to_string(val);

    return original + aux;
}

void solve(){

    int n; cin >> n;
    string solicitud;
    map<string, int> db;

    for(int i = 0; i < n; i++){
        cin >> solicitud;
        if(db.count(solicitud) == 0){
            cout << "OK";
            db[solicitud] = 1;
        }
        else{
            cout << solicitud << db[solicitud];
            db[solicitud]++;
        }

        cout << endl;
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




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string,int> mp;
    mp.reserve(2 * n);

    string nombre;
    for (int i = 0; i < n; i++) {
        cin >> nombre;
        auto it = mp.find(nombre);

        // Si no existe, registro inicial
        if (it == mp.end()) {
            cout << "OK\n";
            mp[nombre] = 1;  // el siguiente sufijo a probar será 1
        } 
        else {
            int sufijo = it->second;
            string nuevo;
            // Buscamos el primer sufijo libre
            while (true) {
                nuevo = nombre + to_string(sufijo);
                if (mp.find(nuevo) == mp.end()) {
                    cout << nuevo << "\n";
                    mp[nombre] = sufijo + 1; // el próximo sufijo a probar
                    mp[nuevo] = 1;           // registramos el nuevo nombre
                    break;
                }
                sufijo++;
            }
        }
    }

    return 0;
}
