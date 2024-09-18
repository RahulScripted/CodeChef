// Chef goes to the supermarket to buy some items. Luckily there's a sale going on under which Chef gets the following offer: If Chef buys 3 items then he gets the item (out of those 3 items) having the lowest price as free.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int minimum = min(a, min(b, c));
        int totalCost = (a + b + c);

        cout << (totalCost - minimum) << endl;
    }
}