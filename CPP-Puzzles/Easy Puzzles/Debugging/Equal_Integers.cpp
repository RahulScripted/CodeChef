// Chef has two integers X and Y. Chef wants to perform some operations to make X and Y equal. In one operation, Chef can either:

// 1.  set X := X + 1

// 2.  Or set Y := Y + 2

// Find the minimum number of operations required to make X and Y equal.





#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;

        if (b >= a) cout << b - a << endl;
        else {
            int c = a - b;
            if (c % 2 == 0) cout << c / 2 << endl;
            else cout << c % 2 + c / 2 + 1 << endl;
        }
    }
}