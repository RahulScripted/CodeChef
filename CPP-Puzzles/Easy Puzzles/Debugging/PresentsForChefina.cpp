// Chef has fallen in love with Cheffina, and wants to buy N gifts for her. On reaching the gift shop, Chef got to know the following two things:

// 1.  The cost of each gift is 1 coin.

// 2.  On the purchase of every 4th gift, Chef gets the 5th gift free of cost.


// What is the minimum number of coins that Chef will require in order to come out of the shop carrying N gifts?





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int coins = (n / 5) * 4 + (n % 5);

        cout << coins << endl;
    }
}