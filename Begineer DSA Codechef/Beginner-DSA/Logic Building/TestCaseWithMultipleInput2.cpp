// Lets write a program in the IDE which performs the following

// 1.  The 1st line of input contains t - the count of testCases

// 2.  Each testCase consists of the following 2 lines of input

// 3.  The 1st line of the testCase contains 2 integers - accept them as variables A and B

// 4.  The 2nd line of the testCase contains 1 string - accept it as a variable S

// For each test case, output on one line the 2 integers followed by the string




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        string S;
        cin >> A >> B;
        cin >> S;
        cout << A << " " << B << " " << S << endl;
    }
}