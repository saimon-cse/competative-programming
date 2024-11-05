#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> scores(n);
        for (int i = 0; i < n; i++) {
            cin >> scores[i];
        }

        int maxDifference = INT_MIN;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = scores[i] - scores[j];
                if (diff > maxDifference) {
                    maxDifference = diff;
                }
            }
        }

        cout << maxDifference << endl;
    }

    return 0;
}
