// The last challenge of the while loop. Chef wants to write a code which checks if a given number is prime.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 2) cout << "No";

    int i = 2;
    bool isPrime = true;
    
    while (i < n / 2) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i++;;
    }
    if (isPrime) cout << "Yes" << endl;
    else cout << "No" << endl;
}