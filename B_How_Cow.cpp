#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;

    for(int i=1; i<=tc; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int m; cin >> m; 
        cout << "Case " << i << ":\n";
        while(m--){
            int x, y;
            cin >> x >> y;
            if(x1 <=x and x<=x2 and y >= y1 and y<=y2) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}