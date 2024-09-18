// Write a string by user-input and print it's length by built-in function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    cout<<"Your String's length : "<<str.length();
}