// Write a program which does the following

// Accepts the count of test cases - t. Each test case has one integer N. Output the following for each test case on separate lines. If input is exactly divisible by 3, output 'Divisible by 3'. Else output 'Not divisible by 3'. If the input is odd, output 'Odd'. Else output 'Even'.






#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        if (N % 3 == 0) cout << "Divisible by 3" << endl;
        else cout << "Not divisible by 3" << endl;
        
        if (N % 2 == 0) cout << "Even" << endl;
        else cout << "Odd" << endl;
    }
}