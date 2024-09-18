// Take input from the console for integer variables z, x and c. Compute and output the following for each tuple z, x and c.

// 1.  "PASS" if c is greater than either x or z

// 2.  Otherwise print "FAIL" in every other case




#include <bits/stdc++.h>
using namespace std;

int main() {

    int z;
    int x;
    int c;
    cin >> z >> x >> c;
    if (c > x || c > z) cout << "PASS" << endl;
    else cout << "FAIL" << endl;
}