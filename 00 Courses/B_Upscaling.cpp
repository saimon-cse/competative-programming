#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        
            int flag=0;
        for(int i=1; i<=n;i++){
            int x = 2;
            if(i%2==1){

                while (x-- )
                {
                    for(int j = 1; j<=n; j++){
                    if(j%2 == 1){
                        cout << "##";
                    }
                    if(j%2 ==0) {
                        cout << "..";
                    }
                }
                cout << endl;
                }
            }
            else{

                while (x--)
                {
                    for(int j = 1; j<=n; j++){
                    if(j%2 == 0){
                        cout << "##";
                    }
                    if(j%2 ==1) {
                        cout << "..";
                    }
                }
                cout << endl;
                }
            }
            
            
            // flag = 1;
        }
    }
}