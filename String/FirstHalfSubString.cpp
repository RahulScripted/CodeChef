// Input a string of even length and return the first half of that string using inbuilt substr function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    int mid = str.length() / 2;
    string sub = str.substr(0,mid);
    cout<<"Your Sub-string : "<<sub<<endl;
}