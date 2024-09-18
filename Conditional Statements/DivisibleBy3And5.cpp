// Write a program that checks if a given number is divisible by both 3 and 5.


#include <iostream>
using namespace std;
int main() {
    int num;
    // cout<<"Enter a number : ";
    cin >> num;
    if(num % 3 == 0 && num % 5 == 0) cout<<"Divisible by both 3 and 5";
    else cout<<"Not divisible by both 3 and 5";
}