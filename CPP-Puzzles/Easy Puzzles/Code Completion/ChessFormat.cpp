// Given the time control of a chess match as a + b, determine which format of chess out of the given 4 it belongs to.


// 1) Bullet if a + b < 3

// 2) Blitz if 3 ≤ a + b ≤ 10

// 3) Rapid if 11 ≤ a + b ≤ 60

// 4) Classical if 60 < a + b





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int sum = (a + b);
        if (sum < 3) cout << "1" << endl;
        else if (sum <= 10) cout << "2" << endl;
        else if (sum <= 60) cout << "3" << endl;
        else cout << "4" << endl;
    }
}