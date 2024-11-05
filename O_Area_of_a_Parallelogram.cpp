#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc; cin >> tc;
    for(int cn =1; cn <=tc; cn++){
        cout << "Case " << cn << ": ";
        int a[2],b[2], c[2];
        for(int i=0; i<2; i++)  cin >> a[i];
        for(int i=0; i<2; i++)  cin >> b[i];
        for(int i=0; i<2; i++)  cin >> c[i];

        int x = (c[0]-b[0]) + a[0];
        int y = (c[1]-b[1]) + a[1];
        
        cout << x << " " << y;

        int l = sqrt((a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]));
        int h = sqrt((b[0]-c[0])*(b[0]-c[0]) + (b[1]-c[1])*(b[1]-c[1]));

        int area = a[0]*b[1] + b[0]*c[1] + c[0]*y + x*a[1] - a[1]*b[0] - b[1]*c[0] - c[1]*x - y*a[0];
        cout << " " << abs(area)/2 << endl;
    }
}

/*
1/2 (1 2 3 4 1)

*/