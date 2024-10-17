// Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. The wildcard character '?' can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length, made up of lower case letters and the character '?'. He wants to know whether the strings X and Y can be matched or not.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s, t;
        cin >> s >> t;

        int n = s.size();
        bool isSame = 1;

        for(int i = 0; i < n; i++) {
            if(s[i] == t[i]) continue;
            if(s[i] == '?' || t[i] == '?') continue;
            isSame = 0;
        }

        if(isSame) cout << "Yes\n";
        else cout << "No\n";
    }
}