// Factorial of any number



#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int fact = 1;
    cin >> num;
    for(int a = 1; a <= num; a++) {
        fact = fact * a;
    }
    
    cout << "The factorial of the given number is: " << fact << endl;
}