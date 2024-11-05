#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int d; cin >> d;
        vector<tuple<string, int, int>>data(d);
        
        for(int i=0; i<d; i++){
            string a; int b, c;
            cin >> a >> b >> c;
            
            data[i] = make_tuple(a, b, c);
        }

        int q; cin >> q;

        while(q--){
            int price; cin >> price;
            
            string result = "UNDETERMINED";
            int cnt = 0;
            for(int i=0; i<d; i++){
                string maker = get<0>(data[i]);
                int low = get<1>(data[i]);
                int high = get<2>(data[i]);

                if(low <= price && price <= high){
                    if(cnt == 0){
                        result = maker;
                        cnt++;
                    }
                    else{
                        result = "UNDETERMINED";
                        break;
                    }
                }
            }
             cout << result << endl;
        }
        if(tc > 0) cout << endl;
        
    }
}