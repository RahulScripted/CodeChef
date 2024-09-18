// You are given a string that represents a positive number. Your task is to write a program that converts this string into its numerical equivalent without using any in-built parsing, conversion libraries, or direct type casting methods. The string will not contain any leading zeros, decimals, or any non-numeric characters.


#include <bits/stdc++.h>
using namespace std;
long long stringToNumber(const string& number) {
    long long num = 0;
    for(char c : number){
        num = num * 10 + (c -'0');
    }
    return num;
}
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string number;
        cout<<"Enter the number in string format : ";
        cin>>number;

        cout<<"After type casting : "<<stringToNumber(number)<<endl;
    }
}