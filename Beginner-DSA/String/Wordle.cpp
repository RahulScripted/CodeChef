// Chef invented a modified wordle. There is a hidden word S and a guess word T, both of length 5. Chef defines a string M to determine the correctness of the guess word. For the ith index:

// 1.  If the guess at the ith index is correct, the ith character of M is G.
// 2.  If the guess at the ith index is wrong, the ith character of M is B.

// Given the hidden word S and guess T, determine string M.



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string modifiedWordle,guessWord;
        cout<<"Enter the modified Wordle : ";
        cin>>modifiedWordle;

        cout<<"Enter the guess Word : ";
        cin>>guessWord;

        string ans = "";
        for(int i = 0;i < modifiedWordle.length();i++){
            if(modifiedWordle[i] == guessWord[i]) ans+='G';
            else ans += 'B';
        }

        cout<<"The string will be : "<<ans<<endl;
    }
}