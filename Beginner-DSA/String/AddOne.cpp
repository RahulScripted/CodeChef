// You are given a large number N. You need to print the number N + 1.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        string s;
        cout<<"Enter the number : ";
        cin>>s;

        bool carry = true;
        for(int i = (s.length() - 1);i >= 0 && carry;i--){
            if(s[i] == '9') s[i] = '0';
            else{
                s[i] += 1;
                carry = false;
            }
        }

        if(carry) cout<<"The number will be : "<<'1' + s<<endl;
        else cout<<"The number will be : "<<s<<endl;
    }
}