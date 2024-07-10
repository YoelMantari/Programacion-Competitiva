#include<bits/stdc++.h>

using namespace std;

int f91(int n){

	if(n<=100) return f91(f91(n+11));
	else return n-10;
}


void solve(){
	
	int n;
	while(cin>>n and n!=0){
		cout<<"f91("<<n<<") = "<<f91(n)<<endl;
	}
}


int main(){


	int t=1;
	while(t--){
		solve();
	}

	return 0;
}