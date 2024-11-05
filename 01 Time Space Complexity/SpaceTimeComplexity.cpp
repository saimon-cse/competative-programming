/*

O(1) < O(logN) < O(N) < O(NlogN) < O(N^2) < O(2^N)

        Bubble Sort takes O(n^2)
        Vector built in sorting function takes O(NlogN)

*/


/*


// Calculate time 

#include<bits/stdc++.h>
#include<ctime>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[10] = {1,2,3,10,12,14,56,3,5,8};

    auto start_time = clock();
    sort(a,a+10);
    auto end_time = clock();

    cout << end_time - start_time << endl;
    
}
*/

