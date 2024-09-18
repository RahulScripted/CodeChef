// Write a C++ program that takes two numbers and an operator (+, -, *, /) as input. Use a 'switch' statement to perform the corresponding arithmetic operation and print the result.


#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    // cout<<"Enter first number : ";
    cin>>num1;
    // cout<<"Enter second number : ";
    cin>>num2;
    char ch;
    // cout<<"Enter a character : ";
    cin>>ch;
    switch(ch){
        case '+':
            cout<<(num1 + num2)<<endl;
            break;
        case '-':
             cout<<(num1 - num2)<<endl;
            break;
        case '*':
            cout<<(num1 * num2)<<endl;
            break;
        case '/':
            cout<<(num1 / num2)<<endl;
            break;
    }
}


// Output: 5 2 +
//           7