// You have to type an email to send to your friend. The email can be represented as a string T (which does not contain spaces). To complete your task you can perform any one of the following actions in one move:

// 1.  Append a character at the end of the string.
// 2.  Append a duplicate of the current string.

// Find the minimum number of moves required to type the email.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        cout<<"Enter the length of the string : ";
        cin>>len;
        
        string str;
        cout<<"Enter the string : ";
        cin>>str;

        int count = 0;
        while(len > 0){
            if(str.substr(0,(len / 2)) == str.substr((len / 2),(len - (len / 2)))){
                len /= 2;
            }
            else len--;
            count++;
        }
        cout<<"The minimum number of moves required to type the email will be : "<<count<<endl;
    }
}