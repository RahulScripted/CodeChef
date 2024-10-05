// Given the values of A and B, can you help Chef find the absolute difference between the correct answer and the value his program prints?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << abs((a * b) - (a + b)) << endl;
}