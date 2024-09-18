// In this problem you need to write a program which does the following. Accepts the number of inputs / test cases as 't'

// The only line of each test case contains 2 integers - declare them as variables A (double) and B (int). For each test case, you need to output A divided by B.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        double A, X;
        int B;
        cin >> A >> B;
        X = A / B;
        cout << X << endl;
    }
}