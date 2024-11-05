#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   
    int tc=1; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int tmp = n/4;
        n %= 4;
        
        cout << tmp + (n>=2 ? 1 : 0) << endl;
    }
   
}