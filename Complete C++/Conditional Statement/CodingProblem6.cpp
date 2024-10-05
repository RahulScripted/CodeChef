// Chef's coding journey continues. Chef was given an integer input N. He wrote a code using while loops to output the factorial of N. 




#include <iostream>
using namespace std;

int main() {
    int N, factorial = 1;
    cin >> N;

    int i = 1;
    while (i <= N) {
        factorial *= i;
        ++i;
    }
    
    cout << factorial;
}