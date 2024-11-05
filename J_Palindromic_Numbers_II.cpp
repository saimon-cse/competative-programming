#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        string s; cin >> s;
        string r = s;
        reverse(r.begin(), r.end());
        cout << "Case " << i << ": " ;
        (r==s) ? cout << "Yes\n" :  cout << "No\n";
    }
}