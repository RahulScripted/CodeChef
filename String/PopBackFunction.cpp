// Write a string by user-input and print and remove a character by built-in function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    str.pop_back(); 
    //push_back() can only remove a single character
    cout<<"Now your String : "<<str;
}