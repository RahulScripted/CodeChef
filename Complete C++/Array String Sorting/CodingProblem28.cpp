// Chef has a string S with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels. Determine whether Chef is happy or not.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    string chk = "aeiou";

    while(t--) {
        string s; 
        cin >> s;

        bool found = 0;

        for(int i = 0; i < s.size() - 2; i++) {
            int count = 0;
            for(int j = 0; j < 3; j++) {
                bool f = 0;
                for(int k = 0; k < chk.size(); k++) {
                    if(s[i + j] == chk[k]) f = 1;
                }
                count += f;
            }
            if(count == 3) found = 1;
        }

        if(found) cout << "Happy\n";
        else cout << "Sad\n";
    }
}