// How do we check the following?

// 1.  Are both A and C odd?

// 2.  Are both A and C even?

// 3.  Is A odd and C even or vice versa?





#include <bits/stdc++.h>
using namespace std;

int main(){
    int A = 15;
    int C = 17;
    if (A % 2 == 0 && C % 2 == 0) cout << "Both A and C are even" << endl;

    else if (A % 2 != 0 and C % 2 != 0) cout << "Both A and C are odd" << endl;

    else cout << "A is odd and C is even or vice versa" << endl;

    A = 15;
    C = 18;
    if (A % 2 == 0 && C % 2 == 0) cout << "Both A and C are even" << endl;

    else if (A % 2 != 0 and C % 2 != 0) cout << "Both A and C are odd" << endl;

    else cout << "A is odd and C is even or vice versa" << endl;
}