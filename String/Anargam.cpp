// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s == t) return true;
    else return false;
}
int main(){
    string s,t;
    cout<<"Enter your string : ";
    getline(cin,s);
    cout<<"Enter your string : ";
    getline(cin,t);
    if(isAnagram(s,t) == true){
        cout<<"Yes! it's a anagram";
    }
    else{
        cout<<"No! it's not a anagram";
    }
}