#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t; 
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long start = max((long long)1, n - k + 1);

        long long count = (n + 1) / 2 - start / 2;

        if (count % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}
