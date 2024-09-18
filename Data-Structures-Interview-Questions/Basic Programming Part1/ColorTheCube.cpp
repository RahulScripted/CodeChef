// Rubik’s cube has six sides in colors: white, blue, green, yellow, red, and orange. A liter of paint costs x1,x2,x3,x4,x5,x6 dollars for each color. Each side of the cube needs half a liter of paint to be painted. How much will you pay for coloring N unpainted cubes?




#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x1, x2, x3, x4, x5, x6;
        cin >> n >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;

        long long atmost = ceil(n / 2.0);
        cout << (x1 + x2 + x3 + x4 + x5 + x6) * atmost << endl;
    }
}