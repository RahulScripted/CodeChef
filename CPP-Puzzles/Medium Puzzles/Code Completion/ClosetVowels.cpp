// Chef considers a string consisting of lowercase English alphabets beautiful if all the characters of the string are vowels. Chef has a string S consisting of lowercase English alphabets, of length N. He wants to convert S into a beautiful string T. In order to do so, Chef does the following operation on every character of the string:

// 1.  If the character is a consonant, change the character to its closest vowel.

// 2.  If the character is a vowel, don't change it.

// Chef realizes that the final string T is not unique. Chef wonders, what is the total number of distinct beautiful strings T that can be obtained by performing the given operations on the string S. Since the answer can be huge, print it modulo 10^9 + 7.





#include <iostream>
#include<string.h>
#include<math.h>

using namespace std;
long long int y = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 1;
        for (int i = 0; i < n; i++) {
            int x = int(s[i]);
            if (x == 99 || x == 103 || x == 108 || x == 114) count = (count * 2) % y;
        }

        cout << count << endl;
    }
}