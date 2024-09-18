// A bulb company claims that the average lifetime of its bulbs is at least X units. The company ran a test on N bulbs. You are given the lifetime of N - 1 of these bulbs. What is the minimum non-negative integer value of lifetime the remaining bulb can have, such that the claim of the company holds true?




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        int sum = 0;
        int a[n - 1];
        for (int i = 0; i < n - 1; i++){
            cin >> a[i];
            sum = sum + a[i];
        }
        
        int y = ((n * x) - sum);
        if (y > 0) cout << y << endl;
        else cout << "0" << endl;
    }
}