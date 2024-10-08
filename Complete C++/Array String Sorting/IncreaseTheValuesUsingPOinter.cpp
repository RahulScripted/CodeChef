// Increment the value using pointer




#include <iostream>
using namespace std;

void incrementByOne(int* numPtr) {
    (*numPtr)++;
}

int main() {
    int number;
    cin >> number;
    incrementByOne(&number);
    cout << number;
}