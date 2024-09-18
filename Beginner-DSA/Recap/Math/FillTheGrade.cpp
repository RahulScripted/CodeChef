// You have a grid with N rows and M columns. You have two types of tiles — one of dimensions 2 x 2 and the other of dimensions 1 x 1. You want to cover the grid using these two types of tiles in such a way that:

// 1.  Each cell of the grid is covered by exactly one tile; and

// 2.  The number of 1 x 1 tiles used is minimized.

// Find the minimum number of 1 x 1 tiles you have to use to fill the grid.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        if (n % 2 != 0 && m % 2 != 0) cout << n + m - 1 << endl;
        else if (n % 2 != 0 && m % 2 == 0) cout << m << endl;
        else if (n % 2 == 0 && m % 2 != 0) cout << n << endl;
        else cout<<0<<endl;
    }
}