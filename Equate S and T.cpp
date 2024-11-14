#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int N, M;
        cin >> N >> M;
        string S, T;
        cin >> S >> T;


        int count_a_S = 0, count_b_S = 0;
       
        for (char c : S) {
            if (c == 'a') count_a_S++;
            else count_b_S++;
        }

        int count_a_T = 0, count_b_T = 0;
        for (char c : T) {
            if (c == 'a') count_a_T++;
            else count_b_T++;
        }

    S.find('a') ;



        if(S==T) cout << "Yes\n";
      else if( S.find('a') != T.find('a'))  {

        cout << "No\n";
          

       }else{
             if((count_a_S == count_a_T) && count_a_T!=0 ) cout << "Yes\n";
            else cout << "No\n";
       }

/*
bbb
bb
*/


        
    }
}

/*
bbbba
abab

*/

