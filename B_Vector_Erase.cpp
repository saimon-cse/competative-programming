#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    // cout << "i";
    // cin >> v[i];
    // 
    int x; cin >> x;

    int a,b; cin >> a >> b;
    // cout << "i";
    // a; b--;

    v.erase(v.begin()+x-1);

    v.erase(v.begin()+a-1, v.begin()+b-1);

    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
}