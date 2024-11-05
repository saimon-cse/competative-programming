#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x , y;
    cin >> x >> y;

    if(x >= y) cout << 0 << endl;
    else{
        int count = 0;
        for(int i = 10; x<y; i++){
            x += 10;
            count++;
        }
        cout << count << endl;
    }
}
