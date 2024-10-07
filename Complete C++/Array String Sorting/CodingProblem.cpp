// The code given in the IDE is trying to do the following : Output all numbers from 1 to 10 on separate lines. break out of the loop when the user-provided number is found. The loop should stop as soon as the input number is matched.





#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 1; i <= 10; i++) {
        if (i == number) break;
        cout << i << "\n";
    }
}