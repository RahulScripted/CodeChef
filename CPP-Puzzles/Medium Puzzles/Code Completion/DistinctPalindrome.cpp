// Given integers N and X, generate a palindrome of length N consisting of lowercase English alphabets such that the number of distinct characters in the palindrome is exactly X. If it is impossible to do so, print -1 instead.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        int ml = (2 * x) - 1;
        if (n < ml) {
            cout << -1 << endl;
            continue;
        }
        else {
            string ans = string(n, 'a');
            for (int i = 1; i < x; i++) {
                ans[i - 1] = 'a' + i;
                ans[n - 1] = 'a' + i;
            }
            cout << ans << endl;
        }
    }
}