#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string>v(n);
    // for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<n; i++){
    int flag = 0;
        cin >> v[i];
        for(int j=0; j<i; j++){
            if(v[i]==v[j]) flag = 1;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
