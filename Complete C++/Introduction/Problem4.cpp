// Chef needs to park her car while she watches a movie. The parking charges at the theater are as follows: Rs. X for the first 1 hour & Rs. Y for every extra hour after the first hour. If Chef parks her car for H hours, what is the total parking charges that she should pay?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int first, extra, total;
    cin >> first >> extra >> total;
    cout << (first + (total - 1) * extra);
}