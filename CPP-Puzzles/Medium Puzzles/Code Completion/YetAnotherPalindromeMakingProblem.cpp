// Chef has a string A (containing lowercase Latin letters only) of length N where N is even. He can perform the following operation any number of times: Swap Ai and Ai + 2 for any 1 ≤ i ≤ (N - 2). Determine if Chef can convert string A to a palindromic string.




#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string s1, s2;
        for (int i = 0; i < n; i += 2) {
            s1 += s[i];
            s2 += s[i + 1];
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}