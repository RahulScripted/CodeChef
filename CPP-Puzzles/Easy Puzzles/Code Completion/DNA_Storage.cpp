// For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

// 00 is replaced with A
// 01 is replaced with T
// 10 is replaced with C
// 11 is replaced with G

// Given a binary string S of length N (N is even), find the encoded sequence.





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

        string result = "";
        for (int i = 0; i < n; i += 2) {
            if (s[i] == '0' && s[i + 1] == '0') result += 'A';
            else if (s[i] == '0' && s[i + 1] == '1') result += 'T';
            else if (s[i] == '1' && s[i + 1] == '0') result += 'C';
            else result += 'G';
        }

        cout << result << endl;
    }
}