#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define high 10000000004
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count += n;
            else
            {
                for (int j = 0; j < n; j++)
                {
                    ll p = pow(a[i],j+1);
                    if(p>high) break;
                    if(a[j]>= p) count++;                   
                }
            }

        }
            cout << count << endl;
    }
}