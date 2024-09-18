// There are 3 hidden numbers A,B,C. You somehow found out the values of min(A,B),min(B,C), and min(C,A).Determine whether there exists any tuple (A,B,C) that satisfies the given values of min(A,B),min(B,C),min(C,A).




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (min(a, b) == min(b, c) && min(b, c) == min(c, a)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}