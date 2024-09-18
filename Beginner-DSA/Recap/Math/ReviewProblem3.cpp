// You have a rectangular farm in Byte-land. You want to divide your land into minimum possible number of square plots. Each square plot must have the same area. All the square plots together divide the land perfectly. So your task is to find the minimum number of square plots with the same area, that can be formed out of the rectangular land, such that they divide it perfectly.




#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int s = __gcd(m, n);
        cout << (m * n) / (s * s) << endl;

    }
    return 0;
}