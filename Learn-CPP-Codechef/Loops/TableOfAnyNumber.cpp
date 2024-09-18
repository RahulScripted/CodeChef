// Write a program which does the following:

// 1.  Create a variable n and store the user defined integer input from console in n.

// 2.  Output to the console the multiplication table for n upto 10





#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= 10; i = i + 1) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
}