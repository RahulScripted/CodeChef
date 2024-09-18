// Mario was going to gift Princess Peach a string S of even length N. Mario broke the string in the middle. He now has two strings A and B such that A = S[1,N / 2] and B = S[N / 2 + 1,N]. Mario is not sure about the order in which he should join the strings A and B to get the string S. Thus, he joins the strings in any random order. Find whether it is guaranteed that Mario will get the same string S if he joins the strings A and B in any order.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        
        string A = S.substr(0, N/2);
        string B = S.substr(N/2, N/2);
        
        if (A == B)  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}