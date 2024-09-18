// Given N words, count the number of unique words.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set < string > words;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        int sz = word.size();
        words.insert(word);
    }

    cout << words.size();
}