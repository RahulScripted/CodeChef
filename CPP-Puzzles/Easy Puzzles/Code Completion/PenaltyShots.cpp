// Given ten integers A1,A2.......A10, where the odd indexed integers(A1,A3,A5,A7,A9) represent the outcome of the shots made by team 1 and even indexed integers(A2,A4,A6,A8,A10) represent the outcome of the shots made by team 2 (here Ai = 1 indicates that it's a goal and Ai = 0 indicates a miss), determine the winner or find if the game ends in a draw.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int penalty[10];
        for (int i = 0; i < 10; i++) cin >> penalty[i];

        int team1 = 0, team2 = 0;
        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0 && penalty[i] == 1) team1++;
            else if (i % 2 != 0 && penalty[i] == 1) team2++;
        }
        
        if (team1 == team2) cout << 0 << endl;
        else if (team1 > team2) cout << 1 << endl;
        else cout << 2 << endl;
    }
}