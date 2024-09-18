// Chef's coding journey continues. Chef was given an integer input N. He wrote a code using WHILE loops to output the factorial of N. But he wasn't able to complete some parts of the code. Help him complete his code.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int factorial = 1;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << factorial << endl;
}