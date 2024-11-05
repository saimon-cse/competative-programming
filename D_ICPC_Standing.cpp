#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i=1; i<=tc; i++){
        int p, s, r;
        cin >> p >> s >> r;
        if(s==10 and r>1) cout << "Case " << i << ": No\n";
        else cout <<"Case " << i << ": Yes\n";
    }
}