// Chef has decided to go to a gold mine along with N of his friends (thus, total N + 1 people including Chef go to the gold mine). The gold mine contains a total of X kg of gold. Every person has the capacity of carrying up at-most Y kg of gold. Will Chef and his friends together be able to carry up all the gold from the gold mine assuming that they can go to the mine exactly once.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + 1) * c >= b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}