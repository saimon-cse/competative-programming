#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i = 1; i<=tc; i++){
        int n; cin >> n;
        int amount =0;
          cout << "Case " << i << ":\n";
        while(n--){
            int x;
            string s;
            cin >> s;
            if(s[0] =='d') {
                cin >> x;
                amount+=x;
            }
            else{
               cout << amount << endl;
            }
        }
    }
}