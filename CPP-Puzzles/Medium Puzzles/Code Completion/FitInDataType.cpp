// Chef wants to store some important numerical data on his personal computer. He is using a new data type that can store values only from 0 till N both inclusive. If this data type receives a value greater than N then it is cyclically converted to fit into the range 0 to N. Given X, the value chef wants to store in this new data type. Determine what will be the actual value in memory after storing X.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (x <= n) cout << x << endl;
        else cout << (x - n - 1) % (n + 1) << endl;
    }
    return 0;
}