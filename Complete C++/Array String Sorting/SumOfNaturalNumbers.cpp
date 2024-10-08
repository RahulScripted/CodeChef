// Write a code to calculate and output the sum of the first N natural numbers.




#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if(n == 1) return 1;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int num;
    cin >> num;

    if (num <= 0) cout << "Please enter a positive integer.\n";
    else cout << sumOfNaturalNumbers(num);
}