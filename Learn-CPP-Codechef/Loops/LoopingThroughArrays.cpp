// Declare a string array x and initialise it to letters of the word - 'CODING'. Output the following to the console on separate lines




#include <bits/stdc++.h>
using namespace std;

int main() {
    string x[6] = {"C", "O", "D", "I", "N", "G"};
    for(int i = 0; i < 6; i = i + 1) {
        cout << i << " = " << x[i] << endl;
    }
}