#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int cn=1; cn<=tc; cn++){
        cout << "Case " << cn << ": ";
        string s[100];
        int s1=1;
        s[0] = "http://www.lightoj.com/";
        int flag=0;
        while(1){
            string cmd; cin >> cmd;
            if(cmd[0]=='V'){
                string x; cin >> x;
                s[s1] = x;
                cout << s[s1] << endl;
                s1++;
                flag=0;
            }
            else if(cmd[0]=='B'){
                if(flag==1){
                    cout << s[++s1] << endl;
                    flag = 0;
                }
                else{
                    s1--;
                    cout << s[--s1] << endl;
                    flag=1;
                }
            }
            else if(cmd[0]=='F'){
                s1++;
                // if(s1>s.size())
                cout << s[s1] << endl;
                flag=0;
            }
            else if(cmd[0]=='Q'){
                
                cout << "Ignored\n";
                break;
            }
        }

    }
}