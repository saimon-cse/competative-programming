#include <iostream>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T--){
		int n; cin >> n;
		string s = "aeiou";
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < (i+n)/5; j++){
				cout << s[i];
			}
			
		}
		cout << '\n';
		
	}
}
