#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i=1; i<= tc; i++){
        int n; cin >> n;
        int count = 0;
        for(int i=0; i<31; i++){
            if((n & (1<<i)) >0) count++;
        }
        if(count&1) cout << "Case " << i << ": odd\n";
        else cout << "Case " << i << ": even\n";
    }
}