#include<bits/stdc++.h>
using namespace std;



int reverse_n(int d){
    int ans = 0;
    while(d){
        ans = ans*10 + d%10;
        d/=10;
    }
    return ans;
}


int binaryy(int d){
    int ans = 0;
    for(int i=0; i< 9; i++){
        if(d&(1<<i)) ans = ans*10 + 1;
        else ans *= 10;
    }
    // return ans;
    int binary = reverse_n(ans);
    return binary;
   
}


int bin(int d){
    int bina = 0;
    int count = 0;
    while(d){
        long long c = pow(10, count);
        count++;
        bina += c * (d%2);
        d/=2;
    }
    return bina;
}


int main(){
    int tc; cin >> tc;
    for(int cn =1 ; cn <= tc; cn++){
        cout << "Case " << cn << ": ";

        int a,b,c,d; char x;
        cin >> a >> x >> b >> x >> c >> x >> d;

        int b1, b2, b3, b4;
        cin >> b1 >> x >> b2 >> x >> b3 >> x >> b4;


        // cout << b1 << ":" << b2 << ":"<< b3 << ":"<< b4 << endl;
        // cout << bin(a) << ":" << bin(b) << ":"<< bin(c) << ":"<< bin(d) <<endl;
        if(b1==bin(a) and b2==bin(b) and b3==bin(c) and b4==bin(d)) cout << "Yes\n";
        else cout << "No\n";

        // cout << bin(5) << endl;
    }
}