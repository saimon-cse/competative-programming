#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i = 1; i<=tc; i++){
        int lift, man;
        cin >> man >> lift;

        int lift_come = (lift>man ? (lift-man)*4 : (man-lift)*4) + 11;
        int lift_down = ((man)*4) + 8 ;
        cout << "Case " << i << ": " << lift_come+lift_down<< endl;
        // cout <<lift_come+ lift_down<<endl;
    }
}
