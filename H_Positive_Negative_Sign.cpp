#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc; cin >> tc;
    for(int i=1; i<=tc; i++){
        long long n, m;
        cin >> n >> m;
        // int temp = 0;
        // long long sum = 0;
        // int flag=1;

        long long ans = n/2 * m;

        cout << "Case " << i << ": " <<  ans << endl;
    }
}

/*
-1 -2 -3 -4 -5 +6 +7 +8 +9 +10 
(-1+6) + (-2+7) + (-3+8) + (-4+9) + (-5+10)
    5       5       5       5           5
=> 5 * 5
=> 10/2 * 5
=> n/2 * m

*/