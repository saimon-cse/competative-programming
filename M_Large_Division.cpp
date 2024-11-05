#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

signed main(){
    int tc; cin >> tc;
    for(int cn =1; cn<=tc; cn++){
        cout << "Case " << cn << ": ";
        // ll a,b;
        string a; ll b;
        cin >> a >> b;
        // if(a%b==0) cout << "divisible\n";
        // else cout << "not divisible\n";
        // cout << a << "\n";

        ll i=0;
        if(a[0]=='-') i=1;
        int remainder = 0;
        b = abs(b);
        for(;i<a.size(); i++){
            remainder = remainder*10 + (a[i]-'0');
            remainder %= b;
        }

        if(!remainder)  cout << "divisible\n";
        else cout << "not divisible\n";
    }
}