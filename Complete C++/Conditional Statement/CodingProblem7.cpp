// Chef's coding journey continues. Chef was given an integer input N - he needs to find the number of digits in the given integer.




#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;

    while (num != 0) {
        count++;
        num /= 10;
    }
    
    cout << count;
    return 0;
}