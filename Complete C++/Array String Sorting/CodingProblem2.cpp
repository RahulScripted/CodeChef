// You are given a user input N which is an integer. The code given in the IDE is trying to print all odd numbers till and including N.




#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) goto even;
        cout << i << "\n";
        
        even:
        cout << "";
    }
}