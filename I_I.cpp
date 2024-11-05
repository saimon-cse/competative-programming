#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,x;
    cin >> a >> b >> c >> x;
    cout<<setprecision(14);
    double y =1.0;
    if(x<=a) cout << y ;
    else if(x<=b){
        printf("%.14f", c/(b-a));
        // cout << y;
    }
    else{
        y =0.0;
        printf("%.14f", 0.0);
    }

}