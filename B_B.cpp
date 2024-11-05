#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    ll ans = -1;

    for(int i=a; i<=b; i++){
        if(i%c==0){ ans = i; break;}
    }
    cout << ans << endl;
}