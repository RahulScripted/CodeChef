// Print the character which occurs more in a user-input string and also print no. of occurrence time

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    vector<int> arr(26,0);
    for(int i = 0;i < str.size();i++){
        char ch = str[i];
        int ascii = (int)ch;
        arr[ascii - 97]++;
    }
    int max = 0;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] > max) max = arr[i];
    }
    cout<<"Most occurring element : ";
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == max){
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<" "<<ch<<" "<<max;
        }
    }
}