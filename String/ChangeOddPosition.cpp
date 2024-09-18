// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    for(int i = 0;i < str.length();i++){
        if(i % 2 != 0){
            str[i] = '#';
        }
    }
    cout<<"Now your String : "<<str;
}