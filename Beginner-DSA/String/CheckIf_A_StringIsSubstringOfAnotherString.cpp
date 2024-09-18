// Given two strings, S1 and S2, your task is to determine whether S2 is a substring of S1. If S2 is a substring of S1, print "YES". Otherwise, print "NO".


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str1,str2;
        cout<<"Enter the first string : ";
        cin>>str1;

        cout<<"Enter the second string : ";
        cin>>str2;
        bool flag = false;
        for(int i = 0;i < str1.size();i++){
            if(str1.substr(i,str2.size()) == str2){
                flag = true;
                break;
            }
        }
        if(flag) cout<<"Yes, "<<str2<<" is a substring of "<<str1<<endl;
        else cout<<"No, "<<str2<<" is not a substring of "<<str1<<endl;
    }
}