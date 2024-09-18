// Sort a string by user-input.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    sort(str.begin(),str.end()); // Order ASCII Value
    cout<<"Your String : "<<str<<endl;
}