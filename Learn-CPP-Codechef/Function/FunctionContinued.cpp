// Your are given 3 lines of input. Each line consists of 2 space separated integers - A and B For each input - you need to compute and output the following on separate lines

// 1.  A^2 + 2 * A * B + B^2
// 2. A + B




#include <iostream>
using namespace std;

// Function to calculate C
int calculateC(int A, int B) {
    return A * A + 2 * A * B + B * B;
}

// Function to calculate D
int calculateD(int A, int B) {
    return A + B;
}

int main() {
    for (int i = 0; i < 3; i++) {
        int A, B;
        cin >> A >> B;
        
        // Use functions to calculate C and D
        int C = calculateC(A, B);
        int D = calculateD(A, B);
        
        cout << C << endl;
        cout << D << endl;
    }   
}