// Declare a variables a and take it as input. Compute if a is divisible by both 7 and 5. Depending on the result above - output the following to the console

// 1.  The number is divisible by both 5 & 7 OR

// 2.  The number is not divisible by both 5 & 7




#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    if (a % 7 == 0 && a % 5 == 0) cout << "The number is divisible by both 5 & 7" << endl;

    else cout << "The number is not divisible by both 5 & 7" << endl;
}