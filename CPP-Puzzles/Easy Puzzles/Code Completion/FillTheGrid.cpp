// You have a grid with N rows and M columns. You have two types of tiles — one of dimensions 2 x 2 and the other of dimensions 1 x 1. You want to cover the grid using these two types of tiles in such a way that:

// 1.  Each cell of the grid is covered by exactly one tile; and

// 2.  The number of 1 x 1 tiles used is minimized.

// Find the minimum number of 1 x 1 tiles you have to use to fill the grid.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b;

        if (a % 2 == 0) {
            if (b % 2 == 0) cout << 0 << endl;
            else cout << a << endl;
        }
        else {
            if (b % 2 == 0) cout << b << endl;
            else cout << a + b - 1 << endl;
        }
    }
}