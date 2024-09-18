// Write a function named calculatePower that takes two integer, base and exponent respectively, and returns the result of raising base to the power of exponent.


#include <bits/stdc++.h>
using namespace std;
int calculatePower(int a,int b) {
    return pow(a,b);
}
int main() {
    int valueOfA,valueOfB;
    // cout<<"Enter the value of A : ";
    cin>>valueOfA;

    // cout<<"Enter the value of B : ";
    cin>>valueOfB;
    int result = calculatePower(valueOfA,valueOfB);
    // cout<<"THe result will be : ";
    cout << result;
}


// Output: 2 3
//          8