// Write a recursive function that counts the number of digits in a positive integer N.




#include <iostream>
using namespace std;

int countDigits(int num) {
    int len = 0;
    while(num){
        len++;
        num /= 10;
    }
    return len;
}

int main() {
    int number;
    cin >> number;

    if (number < 0) cout << "Please enter a positive integer.\n";
    else cout << countDigits(number);
}