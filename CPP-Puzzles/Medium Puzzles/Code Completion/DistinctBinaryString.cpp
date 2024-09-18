// You are given a binary string S of length N. You have to perform the following operation exactly once: Select an index i(1 ≤ i ≤ N) and delete Si from S. The remaining parts of S are concatenated in the same order. How many distinct binary strings of length N - 1 can you get after applying this operation?




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int p = 1;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) continue;
            else p++;
        }

        cout << p << endl;
    }
}