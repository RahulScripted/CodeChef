// Mario was going to gift Princess Peach a string S of even length N. Mario was clumsy and thus, broke the string in the middle. He now has two strings A and B such that A = S[1,2,N] and B = S[2N + 1,N]. Mario is not sure about the order in which he should join the strings A and B to get the string S. Thus, he joins the strings in any random order. Find whether it is guaranteed that Mario will get the same string S if he joins the strings A and B in any order.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; 
        cin >> n;

        string s;
        cin >> s;

        string a, b;
        for(int i = 0; i < n/2; i++) a = a + s[i];
        for(int i = n/2; i < n; i++) b = b + s[i];

        if(a == b) cout << "YES\n";
        else cout << "NO\n";
    }
}