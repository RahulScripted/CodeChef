// You are given a program which does the following

// 1.  Accepts the count of test cases - t - in the 1st line.

// 2.  First line of each test case consists of an integer N

// 3.  Outputs the integer which is greater than N by 1




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        cout << N + 1 << endl;
    }
}