#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i =1; i<=tc; i++){
        cout << "Case " << i << ": ";

        int n, p, q;
        cin >> n >> p >> q;
        int a[n];
        for(int j=0; j<n; j++){
            cin >> a[j];
        }
        sort(a, a+n);
        int count =0;
      
        for(int j=0; j<n;j++){
            if(q>0 and q>=a[j]){
                q -= a[j];
                count++;
            }
        }
        if(count > p) count = p;
        cout << count << endl;
        // for(auto i:a) cout << i <<" ";
        // cout << endl;
    }
}