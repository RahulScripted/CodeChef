// : Input a string of even length and reverse the first half of the string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    int mid = str.length() / 2;
    reverse(str.begin(),str.begin() + mid);
    cout<<"Your String : "<<str<<endl;
}