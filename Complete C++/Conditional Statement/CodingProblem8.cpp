// The last challenge of the while loop. Chef wants to write a code which checks if a given number is prime. You are given an integer N. You need to output 'Yes' or 'No' depending on whether the number is prime or not.





#include <iostream>
using namespace std;

int main() {
    int N, i = 2;
    cin >> N;

    int count = 0;
    while(i < N) {
        if(N % i == 0)count++;
        i++;
    }

    // Primes are only divisible by 1 and themselves
    if(count == 0) cout << "Yes\n";
    else cout << "No\n";
}