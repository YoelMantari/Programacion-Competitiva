 //#include<bits/stdc++.h>
 #include<iostream>
#include <string>
#include <vector>
 #define int long long int
 using namespace std;
 
 //contar todos los casos
int contbin(int n){
	if(n==0) return 1;
	return contbin(n-1)+contbin(n-2);
}

//mostrar tidos los casos
 void mostbin(int n,string cadena,vector<string>&res){

 	if(n==0){
 		res.push_back(cadena);
 		return ;
 	}
	
	mostbin(n-1,cadena+"0",res);

	if(cadena[cadena.size()-1] != '1')
		mostbin(n-1,cadena+"1",res);	 	
 } 

 void mostrar(vector<string> r){
 	for(auto i:r){
 		cout<<i<<endl;
 	}
 }

 
 int32_t main(){
 
 #ifndef ONLINE_JUDGE
 freopen("D:/Proyectos/C++/Problem Set Competitiva/input.txt","r",stdin);
 freopen("D:/Proyectos/C++/Problem Set Competitiva/output.txt","w",stdout);
 #endif
 vector<string> r;
 mostbin(7,"",r);

 mostrar(r);
 	


 	return 0;
 }
 
 