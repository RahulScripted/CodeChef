// There are N piles where the ith pile consists of Ai stones. Chef and Chefina are playing a game taking alternate turns with Chef starting first. In his/her turn, a player can choose any non-empty pile and remove exactly 1 stone from it. The game ends when exactly 1 pile becomes empty. The player who made the last move wins. Determine the winner if both players play optimally.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        bool isWin = false;
        int sum = 0;
        while (n--) {
            int a;
            cin >> a;
            sum += a;
            if (a == 1) isWin = true;
        }
        if (isWin || sum % 2 != 0) cout << "CHEF\n";
        else cout << "CHEFINA\n";
    }
}