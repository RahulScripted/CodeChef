// Write a program to do two tasks given a number n.

// 1.  Print a number in reverse order removing the digit greater than 5.

// 2.  Print the product of all digits of the number.




#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int n1 = n;
    int m1 = 0;
    while (n1 != 0) {
        int digit = n1 % 10;
        if (digit <= 5) m1 = m1 * 10 + digit;
        n1 /= 10;
    }
    cout << m1 << "\n";

    int product = 1;
    n1 = n;
    while (n1 != 0){
        int digit = n1 % 10; 
        product *= digit;
        n1 /= 10;
    }
    cout << product << "\n";
}