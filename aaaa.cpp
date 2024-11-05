#include <iostream>
using namespace std;


int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string moves;
        cin >> moves;
        int wins = 0;
    char prevMove = NULL; 
    for (char move : moves) {
        if (move != prevMove) {
            
            wins++;
            prevMove = move;
        } else {
            
            if (move == 'R') {
            
                if (prevMove == 'P') {
            
                    prevMove = 'S'; 
                } else {
            
                    prevMove = 'P'; 
                }
            } else if (move == 'P') {
                if (prevMove == 'S') {
                    prevMove = 'R'; 
                } else {
                    prevMove = 'S'; 
                }
            } else {
                if (prevMove == 'R') {
                    prevMove = 'P'; 
                } else {
                    prevMove = 'R'; 
                }
                
            }
        }
    }
        cout << wins << endl;
    }

    return 0;
}
