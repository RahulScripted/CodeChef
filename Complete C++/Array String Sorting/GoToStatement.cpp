// Take user provided integer inputs N and K. It is known that K < N. You need to print numbers from 1 to N except K.





#include <iostream>
using namespace std;

int main() {
    int N, K, i = 1;
    cin >> N >> K;

    start:
    if (i <= N) {
        if (i != K) cout << i << "\n";
        i++;
        goto start; 
    }
}