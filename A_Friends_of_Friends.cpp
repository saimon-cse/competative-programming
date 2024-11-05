#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<int>st;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        st.insert(tmp);
        cin >> tmp;
        for(int i=0; i<tmp; i++){
            int tmp1; cin >> tmp1;
            st.insert(tmp1);
        }
    }

    cout << st.size() - n << endl;
}
/*

3
2334 5 1256 4323 7687 3244 5678
1256 2 2334 7687
4323 5 2334 5678 6547 9766 9543


*/