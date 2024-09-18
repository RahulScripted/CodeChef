// Lets write a program in the IDE which performs the following

// 1.  The 1st line of input is an integer t - the count of test cases

// 2.  Each test case consists of 2 lines of input

// 3.  The 1st line of input has 2 space separated integers - accept them as variables A and B

// 4.  The 2nd line of input has 3 space separated integers - accept them as variables C, D and E

// For each test case - output all integers on a single line




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A,B,C,D,E;
        cin >> A >> B;
        cin >> C >> D >> E;
        cout << A << " " << B << " " << C << " " << D << " " << E << endl;
    }
}