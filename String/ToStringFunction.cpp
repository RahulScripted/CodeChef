// Write a C++ Program to find the usecase of to_string build-in function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int digit = 12345;
    string re = to_string(digit);
    int result = re.length();
    cout<<"Length will be : "<<result;
}
