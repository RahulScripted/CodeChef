// Write a program that does the following accepts the number of inputs / test cases as 't'. The only line of each test case contains 2 integers - declare them as variables A and B

// For each test case, you need to perform the following operations

// 1.  Create a variable - D - what you get after subtracting B from A.

// 2.  Create a variable - Q - the quotient when A is divided by B

// 3.  Output 2 space separated integers - D and Q in a single line




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A,B,D,Q;
        cin >> A >> B;
        D = A - B;
        Q = A / B;
        cout << D << " " << Q << endl;
    }
    return 0;
}