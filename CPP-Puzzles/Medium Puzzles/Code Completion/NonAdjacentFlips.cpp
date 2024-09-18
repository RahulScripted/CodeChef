// You are given a binary string S of length N. You can perform the following operation on S: Pick any set of indices such that no two picked indices are adjacent. Flip the values at the picked indices (i.e. change 0 to 1 and 1 to 0). Find the minimum number of operations required to convert all the characters of S to 0.




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

        int count = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count++;
                if (i < (n - 1) && s[i + 1] == '1') {
                    ans = 2;
                    break;
                }
            }
        }

        if (ans == 2) cout << 2 << endl;
        else if (count > 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
}