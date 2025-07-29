#include<bits/stdc++.h>
#include <ostream>
#include <unordered_map>
#include <vector>
#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> w;
    int b;
    for(int i = 0; i < nums.size(); i++){
        b = target - nums[i];

        if(w.count(b) > 0){
            return {w[b], i};
        }
        w[nums[i]] = i;
    }
    return {};
}


void solve(){

    int n, target; cin >> n >> target;
    vector<int> r(n);
    for(int i = 0; i < n; i++){
        cin >> r[i];
    }
    vector<int> aux = twoSum(r, target);
    cout << aux[0] << " " << aux[1] << endl;
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




