// Write a program which does the following

// 1.  Create an int array containing the elements: 10, 20, 30, 40, 50, 60

// 2.  Compile and output to the console the accurate count of the number of integer elements in the given array.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int myNumbers[] = {10, 20, 30, 40, 50, 60};
    cout<<sizeof(myNumbers) / sizeof(myNumbers[0]);
}