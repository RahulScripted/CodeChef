// Below are some simple math formulae that you will find useful

// 1.  min(A,B) - Returns the smallest among 2 integers A and B
// 2.  max(A,B) - Returns the largest among 2 integers A and B

// 3.  abs(A - B) - Necessarily returns the absolute value of (A - B)

// 4.  A % B - Returns the remainder when A is divided by B




#include <bits/stdc++.h>
using namespace std;

int main(){
    int A = 30;
    int B = 45;
    int C = 36;

    cout << max(A, B) << endl;

    cout << min(A, B) << endl;

    cout << abs(A - C) << endl;
    cout << abs(C - A) << endl;

    int D = 6;
    int E = 9;
    
    cout << A % D << endl;
    cout << A % E << endl;
}