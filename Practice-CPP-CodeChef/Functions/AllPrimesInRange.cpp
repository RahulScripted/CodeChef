// Write a program to print all prime numbers in the range [L,R].


#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimesInRange(int left, int right) {
    for (int i = left; i <= right; ++i) {
        if (isPrime(i)) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int left, right;
    cout<<"Enter the value of left : ";
    cin>>left;
    cout<<"Enter the value of right : ";
    cin>>right;
    printPrimesInRange(left, right);
}



// Output: 2 11
//         2 3 5 7 11