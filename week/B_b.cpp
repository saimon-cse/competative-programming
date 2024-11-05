#include <iostream>
using namespace std;

int main(){
	
	int N, X, T;
	cin >> N >> X >> T;

	N = (N + X - 1) / X;

	int ans = N * T;

	cout << ans << endl;
}
