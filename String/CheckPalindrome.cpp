// Check whether the given string is palindrome or not

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int st = 0,end = str.length();
    while(st < end){
        while(st < end && !isalnum(str[st])) st++;
        while(st < end && !isalnum(str[end])) end--;
        if(st < end && islower(str[st]) != islower(str[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    if(isPalindrome(str) == true){
        cout<<"Yes it's a valid palindrome string";
    }
    else{
        cout<<"No it's not a valid palindrome string";
    }
}