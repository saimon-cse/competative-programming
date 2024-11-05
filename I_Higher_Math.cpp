#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i=1; i<=tc; i++){
        int a,b,c;
        cin >> a >> b >>c;
        cout << "Case " << i << ": ";
        if(a*a == (b*b + c*c)) cout << "yes\n";
        else if(b*b == (a*a + c*c)) cout << "yes\n";
        else if (c*c == (a*a + b*b)) cout << "yes\n";
        else cout << "no\n";
    }
}