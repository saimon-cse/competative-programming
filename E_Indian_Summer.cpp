#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    getchar();
    map<string, int>mp;
    for(int i=0; i<n; i++){
        string a;
        getline(cin ,a);
        mp[a]++;
    }

    cout << mp.size() << endl;
}