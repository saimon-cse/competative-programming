

#include<bits/stdc++.h>
using namespace std;


vector<pair<int, int>> findpair(int k){
    vector<pair<int, int>> pair;

    for(int x = k+1; x <= 2*k; x++){
        if((k*x) % (x-k)==0){
            int y = (k*x) / (x-k);
            pair.push_back(make_pair(x,y));
        }
    }

    return pair;
}

int main(){

    vector<int> k;

    int tmp; 
    while(cin >> tmp) k.push_back(tmp);

    for(auto ks : k){
        vector<pair<int,int>>pair = findpair(ks);

        cout << pair.size() << endl;;
        for(auto i: pair){
            cout << "1/" << ks << " = 1/" << i.second << " + 1/" << i.first << endl; 
        }
    } 
}
