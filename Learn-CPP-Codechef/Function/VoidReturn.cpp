// Your are given 3 lines of input. Each line consists of 2 space separated integers - A and B For each input - you need to compute and output the following on separate lines

// 1.  A^2 + 2 * A * B + B^2
// 2. A + B




#include <iostream>
using namespace std;

void computeValue(int A, int B) {
    cout<<A * A + 2 * A * B + B * B<<endl;
    cout<<A + B<<endl;
    return;
}

int main() {
    int t = 3;
    for (int i = 0; i < t; i++) {
        int A, B;
        cin >> A >> B;
        computeValue(A, B);
    }   
}