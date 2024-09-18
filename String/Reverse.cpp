// Write a string by user-input and print the reverse version of string by built-in function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<"Your String : "<<str<<endl;
}