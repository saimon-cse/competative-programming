#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i = 1; i<=tc; i++){
        cout << "Case " << i << ": ";
        int a,b;
        cin >> a>>b ;

       if(a==1 or b==1) cout << max(a,b) << endl;
    //    else if(a<4 and b<4) cout << 4 << endl;
       else if(a==2 or b==2){
        int big = a>b? a:b; 
        // int ans =  ((big%4))<4 ? ((big/4)) ; 
        int ans = big;
        if(big%4==1 or big%4==3) ans++;
        if(big%4==2) ans+=2;        
        cout << ans << endl;
       }
       else cout << (a*b+1)/2 << endl;
    
    }
}
