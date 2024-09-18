// Chef's coding journey continues. Chef was given an integer input N - he needs to find the number of digits in the given integer.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    cout << count << endl;
}