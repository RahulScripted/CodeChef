// You are given an integer N. Find if it is possible to represent N as the sum of several(possibly zero) 2's and several(possibly zero) 7's. Formally, find if there exist two integers X,Y (X,Y≥0) such that 2 ⋅ X + 7 ⋅ Y = N.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        bool c = false;
        if (n % 2 == 0 || n >= 7) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}