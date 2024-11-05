#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long



int div(int n){
    if(n==0) return 0;
    int ans;
    if(n%3==0)  ans = n/3;
    else ans = n/3 + 1;

    return ans;
}


signed main(){
    int tc; cin >> tc;
    for(int cn =1; cn<=tc; cn++){
        cout << "Case " << cn << ": ";
       
        ll a, b;
        cin >> a >> b;
        
       
        cout << 2*(div(b)-div(a)) +1 << endl;
        
    }
}

/*
123456789 10= 55

3)20(6
------
  2


*/