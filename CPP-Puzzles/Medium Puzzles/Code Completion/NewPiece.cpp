// Chef's favorite game is chess. Today, he invented a new piece and wants to see its strengths. From a cell (X,Y), the new piece can move to any cell of the chessboard such that its color is different from that of (X,Y). The new piece is currently located at cell (A,B). Chef wants to calculate the minimum number of steps required to move it to (P,Q).




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, p, q;
        cin >> a >> b >> p >> q;

        int ans = 0;
        if (a == p && b == q) ans = 0;
        else if ((abs(a - p) + abs(b - q)) % 2 == 1) ans = 1;
        else ans = 2;
        cout << ans << endl;
    }
}