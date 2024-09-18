// Chef has a binary string S of length N. Chef can perform the following operation on S: Insert any character (0 or 1) at any position in S. Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in S.


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

        int count = 0;
        for(int i = 0;i < (length - 1);i++){
            if(s[i] == s[i + 1]) count++;
        }

        cout<<"The minimum number of operations Chef needs to perform will be : "<<count<<endl; 
    }
}