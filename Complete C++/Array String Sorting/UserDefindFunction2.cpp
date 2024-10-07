// The code given in the IDE is trying to output the sum, difference, quotient and remainder when 2 user defined numbers - num1 and num2 are provided.




#include <iostream>
using namespace std;

void calculateAndPrintOperations(int num1, int num2) {
    int sum, difference, quotient, remainder;
    sum = num1 + num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    remainder = num1 % num2;
    cout << sum << " " << difference << " " << quotient << " " << remainder;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    calculateAndPrintOperations(num1, num2); 
    return 0;
}