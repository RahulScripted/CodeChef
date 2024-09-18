// Write a program which does the following

// 1.  Declare an integer variable a

// 2.  Accept a user input and store it in the variable a

// 3.  Declare 2 variables square and cube - compute and store the square and cube of a in them

// 4.  Output square and cube to the console on separate lines




#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int square;
    int cube;
    cin >> a;
    square = a * a;
    cube = square * a;
    cout << "Square is: " << square << endl;
    cout << "Cube is: " << cube; 
}