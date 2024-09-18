// N integers 1,2,3,....N are placed on a circle in clockwise order such that i and (i+1) are adjacent for all 1 ≤ i ≤ N - 1, and 1 and N are also adjacent. Given an integer K, Ashish repeatedly removes integers from the circle until only one integer remains. He does so in the following manner. In each move, Ashish finds the integer which is on the K-th place from the smallest one in clockwise order and removes it from the circle, i.e. its neighbour now become adjacent. Since N and K may be very large, Ashish cannot simulate the process himself. Help him find the parity of the last integer that remains after the repeated removals. In other words, report if this integer is odd or even.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        if (k == 1 && n % 2 == 0) cout << "EVEN" << endl;
        else if (k == 1 && n % 2 != 0) cout << "ODD" << endl;
        else if (k == 2) cout << "ODD" << endl;
        else cout << "EVEN" << endl;
    }
}