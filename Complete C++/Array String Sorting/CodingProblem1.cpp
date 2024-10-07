// You are given a user input N which is an integer. The code given in the IDE is trying to print all odd numbers till and including N. However, the code is currently not working as expected.




#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i+=2) {
        if (i % 2 == 0) continue;
        cout << i << "\n";
    }
}