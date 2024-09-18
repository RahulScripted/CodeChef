// Complete the given function which takes three integer parameters and return the pointer to maximum among them, and finally print the largest value in main function.



#include <iostream>
using namespace std;

int* findLargest(int &a, int &b, int &c) {
    if(a > b && a > c) return &a;
    else if(b > a && b > c) return &b;
    else return &c;  
}

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int* largestPtr = findLargest(num1, num2, num3);
    cout << *largestPtr;
}