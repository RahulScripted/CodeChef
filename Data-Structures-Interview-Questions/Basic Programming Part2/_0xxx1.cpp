// You are given a binary string S of size N. A string is called good if The first character of the string is 0. The last character of the string is 1. Count the number of sub-strings in S which are good. Since the answer might be a large number, print it modulo 10^9 + 7;




#include<iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long sum = 0, count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') count += 1;
            else sum += count;
        }
        cout << sum % (int(1e9 + 7)) << endl;
    }
}