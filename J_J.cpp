#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    for(int i=0; i<=255; i++){
        int c = a^i;
        if(c == b){
            cout << i << endl; 
            break;
        }
    }

    // a= 3, b=1;
    // c = a ^ b;
    // cout << c;
}