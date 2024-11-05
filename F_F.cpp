#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, a, b, c;
    cin >> v >> a >> b >> c;

    
    if(v < a) {v-=a; cout << "F\n"; }
   while(v >= 0){
        v -= a;
        if(v<b){ cout << "M"; break;}
        
        v -= b;
        if(v<c){ cout << "T"; break;}

        v -= c;
        if(v<a){ cout << "F"; break;}
        
    }
}