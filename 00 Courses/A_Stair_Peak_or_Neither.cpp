#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;

    while (tc--)
    {
        int a, b, c;
        cin >> a>> b >> c;

        if(a < b and b < c) cout << "STAIR\n";
        else if(a < b and b > c ) cout << "PEAK\n";
        else cout << "NONE\n";
    }
    
}