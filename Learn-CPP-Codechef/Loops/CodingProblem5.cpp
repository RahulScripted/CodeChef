// You are given an integer N. You need to output the first N numbers of the Fibonacci Series.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}