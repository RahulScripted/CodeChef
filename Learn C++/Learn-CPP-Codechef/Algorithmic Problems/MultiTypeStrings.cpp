// Lets write a program in the IDE which performs the following: The 1st line of input contains t - the count of test-cases. Each test-case consists of the following 2 lines of input. The 1st line of the test-case contains 2 integers - accept them as variables A and B. The 2nd line of the test-case contains 1 string - accept it as a variable S. For each test case, output on one line the 2 integers followed by the string





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A, B;
        string S;
        cin >> A >> B;
        cin >> S;
        cout << A << " " << B << " " << S << endl;
    }
}