#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int cn =1; cn<=tc; cn++){
        cout << "Case " << cn << ": ";

        int n, m;
        cin >> n >> m;

        while(m--){
            string s; cin >> s;
            int num, r=0;
            if(s=="pushLeft" or s=="pushRight"){
                cin >> num;
                r++;
                if(r>n) cout << "The queue is full\n";
                else if(s=="pushLeft"){
                    cout << "Pushed in left: " << num << endl;
                }
                else{
                    cout << "Pushed in left: " << num << endl;
                }
            }
            else if(s=="popLeft" or s=="popRight"){

            }
        }
        
    }
}