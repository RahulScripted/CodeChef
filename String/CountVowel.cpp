// Input a string of length n and count all the vowels in the given string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    int vowel  = 0,len = str.length();
    while(len > 0){
        if(str[len] == 'a' || str[len] == 'e' || str[len] == 'i' || str[len] == 'o' || str[len] == 'u' || str[len] == 'A' || str[len] == 'E' || str[len] == 'I' || str[len] == 'O' || str[len] == 'U'){
            vowel++;
        }
        len--;
    }
    cout<<"No. of vowel : "<<vowel;
}