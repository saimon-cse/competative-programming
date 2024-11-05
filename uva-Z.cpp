#include <iostream>
#include <vector>
using namespace std;

int main() {
    while (true) {
        int r, c;
        cin >> r;
        if (r == 0) break;
        cin >> c;

        vector<string> arr(r);
        for (int i = 0; i < r; i++) {
            cin >> arr[i];
        }

        int total_area = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (arr[i][j] == '0') continue;

                int max_width = c; 
                for (int k = i; k < r && arr[k][j] == '1'; k++) {
                    int width = 0;
                    for (int l = j; l < max_width && arr[k][l] == '1'; l++) {
                        width++;
                    }
                    max_width = min(max_width, width + j);
                    total_area += width;
                }
            }
        }

        cout << total_area << endl;
    }

    return 0;
}
