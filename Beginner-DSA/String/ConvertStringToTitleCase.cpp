// Given a string S consisting of only lowercase and uppercase English letters and spaces, your task is to convert it into title case. In title case, the first letter of each word is capitalized while the rest are in lowercase, except for words that are entirely in uppercase (considered as acronyms), which should remain unchanged.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        string s;
        cout<<"Enter the string : ";
        getline(cin,s);
        int n = s.size();
        for(int i = 0;i < n;i++){
            if(i == 0 || s[i - 1] == ' ') s[i] = toupper(s[i]);
            else if(isupper(s[i]) && (islower(s[i + 1]) || islower(s[i - 1]))) s[i] = islower(s[i]);
        }
        cout<<"Finally the string become will be : "<<s<<endl;
    }
}