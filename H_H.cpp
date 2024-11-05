#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[2], b[2], c[2];
    for(int i=0;i<2; i++) cin >> a[i];
    for(int i=0;i<2; i++) cin >> b[i];
    for(int i=0;i<2; i++) cin >> c[i];

    if(a[0]==b[0]) cout << c[0];
    if(a[0]==c[0]) cout << b[0];
    if(b[0]==c[0]) cout << a[0];

    cout << " ";

    if(a[1]==b[1]) cout << c[1] << endl;
    if(a[1]==c[1]) cout << b[1] << endl;
    if(b[1]==c[1]) cout << a[1] << endl;


    // cout << x << " " << -y << endl;
}