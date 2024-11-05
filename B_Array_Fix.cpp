#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc=1; cin >> tc;

    while(tc--){
        int n; cin >> n;
        string s[n];
        string str;
        for(int i=0; i<n;i++){
            cin >> s[i];
            str += s[i]; 
        }
        int flag=true;
        int min=-1;
        for(int i=1; i<n; i++){
            int a = stoi(s[i]);
            min = stoi(s[i-1]);
            // cout << min << " -- " << a <<endl;
            if(min>a){
                flag = false;
                break;
            }

        }
        if(flag){
            cout << "YES\n";
            continue;
        }

        s[0] = str;
        // cout 
        sort(s[0].begin(), s[0].end());
        if(str==s[0]) cout << "YES\n";
        else cout << "NO\n";
    }
}