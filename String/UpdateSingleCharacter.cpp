// Updating of a single character in string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str;
    str[0] = 'R';
    cout<<"Now your String : "<<str;
}