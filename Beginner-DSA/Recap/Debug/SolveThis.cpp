// We have written the code in the ide to print the pattern given below.

//                      *****
//                      ****
//                      ***
//                      **
//                      *
//                      **
//                      ***
//                      ****
//                      *****





#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 5; i > 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}