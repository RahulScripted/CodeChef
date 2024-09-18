// Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction. Find the direction in which Chef is facing after exactly X seconds.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        x = x % 4;
        if (x == 0) cout << "NORTH" << endl;
        else if (x == 1) cout << "EAST" << endl;
        else if (x == 2) cout << "SOUTH" << endl;
        else cout << "WEST" << endl;
    }
}