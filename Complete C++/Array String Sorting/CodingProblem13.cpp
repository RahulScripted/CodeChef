// Write the code for a recursive function that finds the Greatest Common Divisor (GCD) of two positive integers.




#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return __gcd(a,b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 < 0 || num2 < 0) cout << "Please enter positive integers";
    else {
        if(num1 < num2) swap(num1, num2);
        int result = gcd(num1, num2);
        cout << result << "\n";
    }
}