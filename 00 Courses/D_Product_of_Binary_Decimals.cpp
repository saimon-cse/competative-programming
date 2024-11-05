#include<bits/stdc++.h>
using namespace std;

const int N = 100007;

void all_bin(){
    
}


bool ok(int n){
    while(n){
        if(n%10 > 2) return false;
        n/=10;
    }
    return true;
}

int main(){

   
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        // if(ok(n)){
        //     cout << "YES\n";
        //     continue;
        // }

         vector<int> bin;

    bin.push_back(10);
    bin.push_back(11);
    for(int i=0; i<N ; i++){
        int x = bin[i] * 10;
        int y = x + 1;
        if(x<=n)
        bin.push_back(x);
        if(y<=n)
        bin.push_back(y);
        
    }

    reverse(bin.begin(), bin.end());


        // while(n>1){
        //     bool status = false;
        //     for(int i=0; i<N; i++){
        //         if(n%bin[i]==0){
        //             n/=bin[i];
        //             status = true;
        //         }
        //     }
        //     if(!status) break;
        // }
        // if(n==1) cout << "YES\n"; 
        // else cout << "NO\n";



    }
}