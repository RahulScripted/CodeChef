// Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string greater than 5 : ";
    getline(cin,str);
    int first,last;
    cout<<"Enter starting point of change : ";
    cin>>first;
    cout<<"Enter ending point of change : ";
    cin>>last;
    cout<<"Your String : "<<str<<endl;
    reverse(str.begin() + first - 1,str.begin() + last);
    cout<<"Your String : "<<str<<endl;
}