// Chef is working on his swap-based sorting algorithm for strings. Given a string S of length N, he wants to know whether he can sort the string using his algorithm. According to the algorithm, one can perform the following operation on string S any number of times: Choose some index i(1 ≤ i ≤ N) and swap the ith character from the front and the ith character from the back. More formally, choose an index i and swap Si and S(N + 1 - i). Help Chef find if it is possible to sort the string using any (possibly zero) number of operations.




#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string d = s;
        sort(d.begin(),d.end());
        
        int i = 0, j = (n - 1);
        while (i <= j) {
            if (s[i] > s[j]) swap(s[i], s[j]);
            i++;
            j--;
        }

        if (d == s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}