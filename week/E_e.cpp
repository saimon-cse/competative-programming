#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    // int a[?n];
    vector<double> v[n];
    for(int i=0; i<n; i++){
        double a,b; cin >> a >> b;
        v[i].push_back(a);
        v[i].push_back(b);
    }

vector<double> ans;

    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){

            double slop = (v[i][1]-v[j][1])/(v[i][0]-v[j][0]);
            if(slop>=-1 and slop <=1) ans.push_back(slop);
        }
    }

    cout << ans.size() << endl;
    
}