// Chef invented a modified wordle. There is a hidden word S and a guess word T, both of length 5. Chef defines a string M to determine the correctness of the guess word. For the ith index:

// 1.  If the guess at the ith index is correct, the ith character of M is 'G'.

// 2.  If the guess at the ith index is wrong, the ith character of M is 'B'.

// Given the hidden word S and guess T, determine string M.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string S, T;
        cin >> S >> T;

        string result = "";
        int i = 0;
        int n = S.length();
        while(i < n){
            if(S[i] == T[i]) result += 'G';
            else result += 'B';
            i++;
        }
        
        cout<<result<<endl;
    }
}