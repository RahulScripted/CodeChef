// Chef has made a list for his monthly expenses. The list has N expenses with index 1 to N. The money spent on each expense depends upon the monthly income of Chef. Chef spends 50% of his total income on the expense with index 1. The money spent on the ith expense (i > 1) is equal to 50% of the amount remaining, after paying for all expenses with indices less than i. Given that Chef earns 2^X rupees in a month, find the amount he saves after paying for all N expenses.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, N;
        cin >> X >> N;

        N = pow(2, N);
        if (X == 1) cout << N / 2 << endl;
        else {
            while (X--) N = N / 2;
            cout << N << endl;
        }
    }
    return 0;
}