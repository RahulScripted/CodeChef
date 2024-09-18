// Write a program to check if the given number N is Armstrong number.


#include <iostream>
#include <cmath>
using namespace std;
int countDigits(int n) {
    int count = 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    return count;
}

void isArmstrongNumber(int num) {
    int n = num;
    int sum = 0;
    int a = countDigits(num);
    while(num != 0){
        int digit = (num % 10);
        sum += pow(digit,a);
        num /= 10;
    }
    n == sum ? cout<<"Yes"<<endl : cout<<"No"<<endl;
}

int main() {
    int number;
    // cout<<"Enter a number : ";
    cin >> number;
    isArmstrongNumber(number);
}
