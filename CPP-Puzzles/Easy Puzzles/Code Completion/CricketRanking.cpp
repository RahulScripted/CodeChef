// In a season, each player has three statistics: runs, wickets, and catches. Given the season stats of two players A and B, denoted by R, W, and C respectively, the person who is better than the other in the most statistics is regarded as the better overall player. Tell who is better amongst A and B. It is known that in each statistic, the players have different values.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r1, r2, w1, w2, c1, c2;
        cin >> r1 >> w1 >> c1 >> r2 >> w2 >> c2;

        if (r1 > r2 && w1 > w2 || r1 > r2 && c1 > c2 || w1 > w2 && c1 > c2) cout << "A" << endl;
        else cout << "B" << endl;
    }
}