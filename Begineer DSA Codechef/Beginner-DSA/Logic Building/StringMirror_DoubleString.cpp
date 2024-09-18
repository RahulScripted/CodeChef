// Write a program in the IDE which does the following

// 1. Accepts the count of test cases - t - in the 1st line. First line of each test case consists of a string S

// 2. You need to perform the following operation. Create a variable X which contains the string S concatenated with the string S




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string S, X;
        cin >> S;
        X = S + S;
        cout << X << endl;
    }
}