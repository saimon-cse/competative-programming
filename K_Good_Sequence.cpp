#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;   
        mp[tmp]++;
    }

    int ans = 0;
    for(auto it:mp)
        if(it.first != it.second)
          ans += (it.first < it.second) ? (it.second-it.first) : it.second;

    cout << ans << endl;
}

/*
6
1 2 2 3 3 3
1 2 3

*/