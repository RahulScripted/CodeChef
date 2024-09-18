// Write a program to input an integer N in decimal form, convert it into binary, and then print the result.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    // cout<<"Enter a number : ";
    cin>>num;
    
    string s = "";
    while(num > 0){
        if(num % 2 == 0) s += "0";
        else s += "1";
        num /= 2;
    }
    for(int i = s.size() - 1;i >= 0;i--) cout<<s[i];
    cout<<endl;
}
