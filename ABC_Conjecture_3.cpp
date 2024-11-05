#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s; cin >> s;

        int cnt_a = 0, cnt_b = 0, cnt_c = 0, cnt = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='a') cnt_a++;
            if(s[i]=='b' and cnt_a) cnt_b = cnt_a;
            else if(s[i]=='c' and cnt_a and cnt_b){
                cnt++;
                cnt_a--;
                cnt_c--;
            }
        }
        cout << cnt << endl;
    }
}