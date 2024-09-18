// Chef wants to gift C chocolates to Botswal on his birthday. However, he has only X chocolates with him. The cost of 1 chocolate is Y rupees. Find the minimum money in rupees Chef needs to spend so that he can gift C chocolates to Botswal.



#include <iostream>
using namespace std;

int main() {
    int c, x, y;
    cin >> c >> x >> y;
    cout << ((c - x) * y) << endl;

}