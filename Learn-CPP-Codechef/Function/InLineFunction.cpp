// Write a program that takes two numbers, a and b, as user input and calculates the value of the expression (a+ b) ^ 2 using an inline function.





#include<iostream>
using namespace std;

inline int abSquared(int a, int b){
    int value = a * a + 2 * a * b + b * b;
    return value;
}

int main(){
    int a, b;
    cin >> a >> b;
    int expression_value = abSquared(a, b);
    cout<< expression_value<<endl;
}