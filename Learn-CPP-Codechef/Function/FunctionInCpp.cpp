// Your are given 3 lines of input. Each line consists of 2 space separated integers - A and B For each input - you need to compute and output the following on separate lines

// 1.  A^2 + 2 * A * B + B^2
// 2. A + B




#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
        cin >> A >> B;
        
        int C = A * A + 2 * A * B + B * B;
        int D = A + B;
        
        cout << C << endl;
        cout << D << endl;

        cin >> A >> B;
        
        C = A * A + 2 * A * B + B * B;
        D = A + B;
        
        cout << C << endl;
        cout << D << endl;
        cin >> A >> B;
        
        C = A * A + 2 * A * B + B * B;
        D = A + B;
        
        cout << C << endl;
        cout << D << endl;
    
}