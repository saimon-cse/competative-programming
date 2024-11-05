#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   
    int tc=1; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);
        
        int tmp = n/2;
        int sum =0;

        for(int i = n/2; i<n; i++){
            sum += a[i];
        }
        for(int i=0; i<n/2; i++){
            sum -= a[i];
        }

        cout << sum << endl;
    }
   
}