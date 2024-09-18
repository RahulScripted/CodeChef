// Write two string by user-input and print concat by using built-in function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter your string : ";
    getline(cin,str1);
    cout<<"Enter your string : ";
    getline(cin,str2);
    string str = str1 +" "+ str2;
    cout<<"After concat: "<<str<<endl;
}