#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i = 1; i<= tc; i++){
        double r; cin >> r;
        double area = (2 * acos (0.0)) * r * r;
        // cout << setprecision();
        // cout << "Case " << i << ": " << 2*r *2*r - area << endl;
        printf("Case %d: %.2f\n", i, 2*r *2*r - area);
    }
}