// Write a program that takes three space separated numbers as input.

// 1. Prints "Increasing" if the numbers are in strictly increasing order,
// 2. "Decreasing" if they are in strictly decreasing order,
// 3. and "Neither" otherwise.

// Check the sample input / output below for further clarity.



#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    if(num1 > num2 && num2 > num3) cout<<"Decreasing"<<endl;
    else if(num1 < num2 && num2 < num3) cout<<"Increasing"<<endl;
    else cout<<"Neither"<<endl;
}