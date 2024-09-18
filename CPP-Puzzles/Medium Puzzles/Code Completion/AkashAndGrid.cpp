// Akash is stuck in a N x N grid, where N is odd. The rows of the grid are numbered 1 to N from top to bottom, and the columns are numbered 1 to N from left to right. The cell at the intersection of the i-th row and j-th column will be denoted (i,j). The grid has a unique center cell — ((N + 1) / 2,(N + 1) / 2). Akash is currently at cell (Xs,Ys). He would like to reach the exit of the grid, which is located at the center. It is guaranteed that (Xs,Ys) is not the center. Suppose Akash is at cell (x,y). He can make the following movements:

// 1.  He can freely move along diagonals, i.e, to cells 
// (x - 1,y - 1),(x - 1,y + 1),(x + 1,y - 1),(x + 1,y + 1)

// 2.  He can move one step horizontally or vertically with the cost of 1 gold coin, i.e, to cells (x,y - 1),(x,y + 1),(x - 1,y),(x + 1,y)

// Akash would like to minimize the number of coins required to reach the center. Please help him find this number.





#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        if (x % 2 == 0) {
            if (y % 2 == 0) cout << 0 << endl;
            else cout << 1 << endl;
        }
        else {
            if (y % 2 == 1) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
}