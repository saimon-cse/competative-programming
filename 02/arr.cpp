#include<bits/stdc++.h>
using namespace std;

struct Array{
    int *a;
    int s;
    int len;
};

int main(){
    Array arr;
    arr.s = 5;
    
    arr.a = new int[5];
    arr.a[0] = 1;
    arr.a[1] = 12;
    arr.a[2] = 11;
    arr.a[3] = 14;
    arr.a[4] = 10;

    for(int i=0; i<5; i++)
    cout << arr.a[i] << " ";
    

}