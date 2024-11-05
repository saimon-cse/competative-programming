#include <bits/stdc++.h>
using namespace std;

bool check(int r, int c, int size, vector<string> &arr) {
    char ch = arr[r][c];
    for (int i = r - size; i <= r + size; i++) {
        for (int j = c - size; j <= c + size; j++) {
            if (i < 0 || i >= arr.size() || j < 0 || j >= arr[0].size() || arr[i][j] != ch) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int tc;
    cin >> tc;  
    while (tc--) {
        int r, c, q;
        cin >> r >> c >> q;

        vector<string> arr(r);
        for (int i = 0; i < r; i++) {
            cin >> arr[i];
        }

        cout << r << " " << c << " " << q << endl;
        for (int i = 0; i < q; i++) {
            int x, y;
            cin >> x >> y;

            int size = 0;
            while (check(x, y, size, arr)) {
                size++;
            }
            cout << 2 * size - 1 << endl;
        }
    }
    return 0;
}
