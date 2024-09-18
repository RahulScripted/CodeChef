// Chef has an 8 x 8 chessboard. He placed a knight on the square (X1,X2). Note that, the square at the intersection of the ith row and jth column is denoted by (i,j). Chef wants to determine whether the knight can end up at the square (X2,Y2) in exactly 100 moves or not.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (abs(x1 - x2) + abs(y1 - y2) & 1) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}