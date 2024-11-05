#include <bits/stdc++.h>
using namespace std;


int main(){
    pair<int, string> p;
    // p = make_pair(27, "Saimon");
    p = {2, "Saimon"};

    pair <int, string> p1 = p; // pass only copy
    p1.first = 1;
    cout << p.first << " " << p.second << endl;

    pair <int, string> &p2 = p; // call the referance
    p2.first = 10;
    cout << p.first << "  " << p.second << endl;

    //pair array
    pair <int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    //swap pair array 
    swap(p_array[0], p_array[3]);
    
    for(int i=0; i<3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

}