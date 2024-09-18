// The code in the IDE is trying to write a program that takes an integer as input, increments its value by 1 using a function, and then prints the updated value. The code is trying to use the concept of pointers - however, it is incorrect.




#include <iostream>
using namespace std;

void incrementByOne(int &numPtr) {
    (numPtr)++;
}

int main() {
    int number;
    cin >> number;

    incrementByOne(number);
    cout << number;
}