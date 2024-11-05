#include<bits/stdc++.h>
using namespace std;


int main(){

    int tc=1;
    while(tc--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        sort(v.begin(), v.end());

        for(auto i:v) cout << i << " ";
        

    }
}