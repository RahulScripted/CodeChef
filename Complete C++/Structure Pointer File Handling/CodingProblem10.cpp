// Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them. The first thing Chefu wanted to do was to calculate the result of his homework — the sum of A and B, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int t = a + b;
        int n = 0;

        while (t > 0) {
            int x = t % 10;
            if (x == 0) n += 6;
            else if (x == 1) n += 2;
            else if (x == 2) n += 5;
            else if (x == 3) n += 5;
            else if (x == 4) n += 4;
            else if (x == 5) n += 5;
            else if (x == 6) n += 6;
            else if (x == 7) n += 3;
            else if (x == 8) n += 7;
            else if (x == 9) n += 6;
            t = t / 10;
        }
        cout << n << "\n";
    }

    return 0;
}