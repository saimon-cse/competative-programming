#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i<n; i++) cin >> a[i] >> b[i];

    int sum =0;
    for(int i=0; i<n;i++){
        for(int j=0; j<i; j++){
            if(a[i]==b[j]) sum++;
            if(b[i]==a[j]) sum++;
        }
    }

    cout << sum << endl;
}