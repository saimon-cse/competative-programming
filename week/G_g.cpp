#include <bits/stdc++.h>
using namespace std;

void input(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);

    input(a, n), input(b, n), input(c, n);

    unordered_map<int, int> b_cnt;
    for (int i = 0; i < n; ++i) {
        b_cnt[b[c[i] - 1]]++; 
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cnt += b_cnt[a[i]];
    }

    cout << cnt << endl;

    return 0;
}
