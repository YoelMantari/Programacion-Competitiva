#include <bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll>
#define vct vector
#define pb push_back
#define er erase
#define fi(i,a,n,w) for(int i =a;i<n;i+=w)
#define fl(i,a,n,w) for(ll i=a;i<n;i+=w)
#define fr first
#define se second
#define sz(a) a.size()
#define mstr(r) for(auto i:r)cout<<i<<" ";
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;

void imprimir(vector<int> &inicio, vector<int> &aux, vector<int> &destino) {
    cout << "A=> ";
    if (!inicio.empty()) {
        for (size_t j = 0; j < inicio.size(); j++) {
            if (j > 0) cout << " ";
            cout << inicio[j];
        }
    }
    cout << endl;

    cout << "B=> ";
    if (!aux.empty()) {
        for (size_t j = 0; j < aux.size(); j++) {
            if (j > 0) cout << " ";
            cout << aux[j];
        }
    }
    cout << endl;

    cout << "C=> ";
    if (!destino.empty()) {
        for (size_t j = 0; j < destino.size(); j++) {
            if (j > 0) cout << " ";
            cout << destino[j];
        }
    }
    cout << endl << endl;
}

void hanoi2(int n, vector<int> &inicio, vector<int> &aux, vector<int> &destino, int &m) {
    if (n == 0 || m == 0) return;
    hanoi2(n - 1, inicio, destino, aux, m);
    destino.push_back(inicio.back());
    inicio.pop_back();
    m--;
    imprimir(inicio, aux, destino);
    hanoi2(n - 1, aux, inicio, destino, m);
}

void solve() {
    int n, m;
    int i = 1;
    while (cin >> n >> m && (n != 0 && m != 0)) {
        cout << "Problem #" << i << endl;

        vector<int> inicio, aux, destino;
        for (int j = n; j >= 1; j--) inicio.push_back(j);

        imprimir(inicio, aux, destino);

        hanoi2(n, inicio, aux, destino, m);
        i++;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/Problem Set Competitiva/input.txt", "r", stdin);
    freopen("D:/Problem Set Competitiva/output.txt", "w", stdout);
#endif
    fast
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
