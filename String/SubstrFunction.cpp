// Write a string by user-input and print the sub-string of string by built-in function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    string sub = str.substr(2);
    cout<<"Your Sub-string : "<<sub<<endl;
}