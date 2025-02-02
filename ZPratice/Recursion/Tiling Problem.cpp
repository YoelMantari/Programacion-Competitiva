//#include<bits/stdc++.h>
#include<iostream>
#include <vector>
#define int long long int
using namespace std;


int tiling(int n){
	if(n<=3)return 1;
	return tiling(n-1) + tiling(n-4);
}

int tilingMemo(int n, vector<int>& memo) {
    if (n < 0) return 0;        // Si el espacio es negativo, no hay formas válidas
    if (n == 0) return 1;       // Caso base: exactamente una forma para espacio vacío
    if (memo[n] != -1) return memo[n]; // Si ya se calculó, devolver el resultado almacenado

    // Guardamos el resultado en el memo
    memo[n] = tilingMemo(n - 1, memo) + tilingMemo(n - 4, memo);
    return memo[n];
}

int tilingWithMemoization(int n) {
    vector<int> memo(n + 1, -1); // Inicializamos el memo con -1 (no calculado)
    return tilingMemo(n, memo);
}


int32_t main(){

#ifndef ONLINE_JUDGE
freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
#endif
	
	cout<<tiling(5);

	return 0;
}


