// Input a string of length less than 10 and convert it into integer without using builtin function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string less than 10 characters : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    int power = 1,val = 0;
    while(str.length()){
        val += power * (str.back() - '0');
        str.pop_back();
        power *= 10;
    }
    cout<<"In integer value will be : "<<val;
}