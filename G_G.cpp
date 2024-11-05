#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k, a;
    cin >> n >> k >> a;
    int count = 0;
    int card=k, person=0;
 
    if(n==1) {cout << a << endl;return 0;}
    for(person = a; card != 0; person++, card--){
        if(person>n) person = 1;  
    }
    cout << person-1 << endl;
}


