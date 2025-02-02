#include<iostream>
#include<vector>
using namespace std;


void iniciar(vector<vector<int>> &r,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>r[i][j];
		}
	}
}


void multiplicar(vector<vector<int>> &a,vector<vector<int>> &b,vector<vector<int>> &c,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int z=0;z<n;z++){
				c[i][j]+=(a[i][z]*b[z][j]);
			}
		}
	}

}

void mostrar(vector<vector<int>> r,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
freopen("D:/Problem Set Competitiva/input.txt","r",stdin);
freopen("D:/Problem Set Competitiva/output.txt","w",stdout);
#endif

	int n;cin>>n;
	vector<vector<int>> a(n,vector<int>(n,0));
	vector<vector<int>> b(n,vector<int>(n,0));
	vector<vector<int>> c(n,vector<int>(n,0));
	iniciar(a,n);iniciar(b,n);

	multiplicar(a,b,c,n);
	mostrar(c,n);

	return 0;
}