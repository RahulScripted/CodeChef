// For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

// 00 is replaced with A
// 01 is replaced with T
// 10 is replaced with C
// 11 is replaced with G

// Given a binary string S of length N (N is even), find the encoded sequence.



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of the string : ";
        cin>>length;

        string s;
        cout<<"Enter the string : ";
        cin>>s;

        string ans = "";
        for(int i = 0;i < s.length();i+=2){
            if(s[i] == '0' && s[i + 1] == '0') ans +='A';
            else if(s[i] == '0' && s[i + 1] == '1') ans +='T';
            else if(s[i] == '1' && s[i + 1] == '0') ans +='C';
            else if(s[i] == '1' && s[i + 1] == '1') ans +='G';
        }
        cout<<"The encoded sequence will be : "<<ans<<endl;
    }
}