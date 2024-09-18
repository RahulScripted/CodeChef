// In this problem you need to write a program which does the following - Accepts the number of inputs / test cases as 't'. The only line of each test case contains 2 integers - declare them as variables A and B

// For each test case, you need to perform the following operations

// 1.  Create a variable X - the division of A by B which returns a float value

// 2.  Create a variable Y - the division of A by B which returns a integer value

// Output 2 space separated integers - X and Y in a single line.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        double A, B, X;
        cin >> A >> B;
        X = A / B;
        int C, D, Y;
        C = A;
        D = B;
        Y = A / B;
        cout << X << " " << Y << endl;
    }
}