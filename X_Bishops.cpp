#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc; cin >> tc;
    for(int cn =1; cn<=tc; cn++){
        int a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        cout << "Case " << cn << ": ";


        int x = abs(a[0]-b[0]);
        int y = abs(a[1]-b[1]);


        if((((a[0]+a[1])%2==0) and ((b[0]+b[1])%2!=0)))  cout << "impossible\n";
        else if(((a[0]+a[1])%2!=0) and ((b[0]+b[1])%2==0)) cout << "impossible\n";
        // else if((a[0]+1 == a[1]) and (b[0]+1 == b[1])) cout << 1 << endl;
        //  else if((a[1]+1 == a[0]) and (b[1]+1 == b[0])) cout << 1 << endl;
        else if(x==y) cout << 1 << endl;
         else if((a[0]==a[1]) and (b[0]==b[1])) cout << 1 << endl;
         else cout << 2 << endl;
    }
}