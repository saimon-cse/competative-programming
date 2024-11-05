#include<bits/stdc++.h>
using namespace std;



int main(){
    int n; cin >>n;

    vector<int>v;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int a ,b;
    a=b=0;
    int i=0, j=n-1;
    while(i<j){
            (v[i]>v[j]) ? a+=v[i++] : a+=v[j--];
            (v[i]>v[j]) ? b+=v[i++] : b+=v[j--];
    }
    if(n%2) a+=v[i];

    cout << a << " " << b;
    
}