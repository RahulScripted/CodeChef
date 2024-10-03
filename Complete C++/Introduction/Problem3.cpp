// Chef has recently started learning from the new CodeChef SQL course. He has a table which initially has R rows and C columns. He then adds E extra rows to it. How many total cells does he have finally?





#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col, extra;
    cin >> row >> col >> extra;
    cout << (row + extra) * col;
}