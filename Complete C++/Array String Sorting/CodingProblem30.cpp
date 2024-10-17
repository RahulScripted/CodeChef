// Not everyone probably knows that Chef has younger brother Jeff. Currently Jeff learns to read. He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows. Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!





#include <iostream>
using namespace std;

int main() {
    string s; 
    cin >> s;

    int n; 
    cin >> n;

    for(int i = 0; i < n; i++) {
        string t;
        cin >> t;

        bool canread = 1;

        for(int j = 0; j < t.size(); j++) {
            bool f = 0;
            for(int k = 0; k < s.size(); k++) {
                if(t[j] == s[k]) f = 1;
            }
            if(f == 0) canread = 0;
        }

        if(canread) cout << "Yes\n";
        else cout << "No\n";
    }
}