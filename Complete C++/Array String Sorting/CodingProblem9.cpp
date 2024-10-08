// You are given an integer N. Update the function given in the IDE and use pointers to output the factorial of integer N.




#include <iostream>
using namespace std;

void calculateFactorial(int *numPtr) {
    int result = 1;
    for(int i = 1; i <= *numPtr; i++) result *= i;
    *numPtr = result;
}

int main() {
    int number;
    cin >> number;

    calculateFactorial(&number); 
    cout << number;
}