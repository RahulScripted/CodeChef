// Write a recursive function to calculate the factorial of a given positive integer N.




#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int num;
    cin >> num;

    if (num < 0) cout << "Factorial is not defined for negative numbers.\n";
    else cout << factorial(num) << "\n";
}