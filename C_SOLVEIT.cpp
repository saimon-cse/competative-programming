#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int n, q; scanf("%d%d", &n,&q);

    set<int>st;
    while(q--){
        int t, x;scanf("%d%d", &t,&x);

        if(t==1){
            st.insert(x);
        }
        else{
            auto it =st.lower_bound(x);
            printf("%d\n", (it==st.end()? -1 : *it));
            
        }
    }
    
}