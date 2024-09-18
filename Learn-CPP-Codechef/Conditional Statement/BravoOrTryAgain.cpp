// Take input from the console for integer variables a and b. Compute and output the following

// 1.  "Bravo!" if a is greater or equal to b

// 2.  Otherwise print "Try again" in every other case




#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    if (a >= b) cout << "Bravo!" << endl;
    else cout << "Try Again" << endl;
}