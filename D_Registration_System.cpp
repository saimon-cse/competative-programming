#include<bits/stdc++.h>
using namespace std;


map<string,int>mp;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)    {
        string s;
        cin>>s;
       mp[s]+=1;
       int ans=mp[s];
       if(ans==1){
           cout<<"OK"<<endl;
           continue;
       }
       else  cout<<s<<ans-1<<endl;
    }
}