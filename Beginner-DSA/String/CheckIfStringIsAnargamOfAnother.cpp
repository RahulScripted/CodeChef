// Given two strings, your task is to check if they are anagrams of each other. Two strings are considered anagrams if by rearranging the letters of one string, we can get the other string. Your program should be able to read two strings from the input and output "YES" if they are anagrams of each other, and "NO" otherwise.


#include <bits/stdc++.h>
using namespace std;
bool anargamCheck(const string& str1,string& str2){
    if(str1.length() != str2.length()) return false;

    vector<int>count(26);
    for(char c : str1) count[c - 'a']++;
    for(char c : str2) count[c - 'a']--;

    for(int i = 0;i < 26;i++){
        if(count[i] != 0) return false;
    }

    return true;
}
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str1,str2;
        cout<<"Enter the first string1 : ";
        cin>>str1;

        cout<<"Enter the second string1 : ";
        cin>>str2;

        if(anargamCheck(str1,str2)) cout<<"Yes, "<<str1<<" and "<<str2<<" are anagram"<<endl;
        else cout<<"No, "<<str1<<" and "<<str2<<" are not anagram"<<endl;
    }
}