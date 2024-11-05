#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc; cin >> tc;
        int h, m;
        char s;
    while(tc--){
        cin >> h >> s >> m;

        string am = h < 12 ? " AM\n" : " PM\n";
        h = (h % 12 ? h%12 : 12);
        //  h < 12 ? (cout << h%12 << h << s << m << am) : (cout << "0" << h%12 << s << m << am);
        cout << (h<10 ? "0" : "") << h << s << (m<10 ? "0":"") << m << am;


        

    }
}