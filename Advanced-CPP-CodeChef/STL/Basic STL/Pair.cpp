// Given N pairs of integers, print the smaller one among them.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    pair < int, int > p[n];
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    
    for (int i = 0; i < n; i++) cout << min(p[i].first, p[i].second) << endl;
}