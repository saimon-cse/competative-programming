#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc; 
    while(tc--){
        int n, k; cin >> n >> k;
        
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        
        int gold = 0; 
        int donet = 0;
        for(int i=0; i<n; i++){
            if(a[i]>=k)  gold += a[i];
            else if(a[i]==0 and gold>0){
                gold--;
                donet++;
            }

            
        }

        cout << donet << endl;

    }
}