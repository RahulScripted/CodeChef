// Input a string and return the number of times the neighboring characters are different from each other.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"Your String : "<<str<<endl;
    int count = 0;
    for(int i = 0;i < str.length();i++){
        if(str.length() == 1){
            break;
        }
        if(str.length() == 2 && str[0] != str[1]){
            count = 1;
            break;
        }
        if(i == 0){
            if(str[i] != str[i + 1]) count++;
        }
        else if(i == str.length() - 1){
            if(str[i] != str[i - 1]) count++;
        }
        else if(str[i] != str[i + 1] && str[i] != str[i - 1]) count++;
    }
    cout<<"The number of times the neighboring characters are different from each other : "<<count;
}