#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int cn=1; cn<=tc; cn++){
        int s, d;
        cin >> s >> d;
        set< pair<int,int> > st;
        int a, b;
        for(int i=0; i<d; i++){
            cin >> a >> b;
            st.insert(make_pair(a, b));
        }

        cout << "Scenario #" << cn << ": " << ((st.size() == d) ? "possible\n" : "impossible\n");
    }
}
