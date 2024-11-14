#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

const int MOD = 998244353;

// Function to check if a vector is a palindrome
bool isPalindrome(const std::vector<int>& vec) {
    int left = 0, right = vec.size() - 1;
    while (left < right) {
        if (vec[left] != vec[right]) return false;
        left++;
        right--;
    }
    return true;
}

// Function to count good values of X for a given array B
int countGoodX(const std::vector<int>& B) {
    int maxB = *std::max_element(B.begin(), B.end());
    int minB = *std::min_element(B.begin(), B.end());

    // If all elements are the same, infinitely many X are good
    if (maxB == minB) return -1;

    // Set to collect unique good X values
    std::set<int> goodX;

    // Iterate over potential divisors and check if they make the array palindromic
    for (int X = 1; X <= maxB; ++X) {
        std::vector<int> C;
        for (int b : B) {
            C.push_back(b % X);
        }
        if (isPalindrome(C)) {
            goodX.insert(X);
        }
    }

    return goodX.size();
}

// Main function to process each test case
int processTestCase(int N, int M) {
    int sumF = 0;

    // Iterate over all possible arrays of length N with values in range [1, M]
    for (int a = 1; a <= M; ++a) {
        for (int b = a; b <= M; ++b) {
            std::vector<int> B = {a, b};  // You can generalize this for N length

            int fB = countGoodX(B);
            if (fB == -1) {
                sumF = (sumF + MOD - 1) % MOD;  // Adding -1 (mod MOD)
            } else {
                sumF = (sumF + fB) % MOD;
            }
        }
    }

    return sumF;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, M;
        std::cin >> N >> M;
        int result = processTestCase(N, M);
        std::cout << result << "\n";
    }
    return 0;
}
