// Chef bought N items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items. 1 polybag can contain at most 10 items. What is the minimum number of polybags needed by Chef?




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 10 == 0) cout << n / 10 << endl;
        else cout << (n / 10) + 1 << endl;
    }
}