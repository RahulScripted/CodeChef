// We have written the code in the ide to print the pattern given below.

//                      *
//                      **
//                      ***
//                      ****
//                      *****
//                      ****
//                      ***
//                      **
//                      *





#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    for (int i = 4; i >= 0; i--) {
        for(int j = i;j >= 0;j--){
            cout << "*";
        }
        cout << "\n";
    }
}