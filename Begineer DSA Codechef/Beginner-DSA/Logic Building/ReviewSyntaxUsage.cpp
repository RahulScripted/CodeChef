// Write a program which does the following - 

// Accepts the count of test cases - t. Each test case has one integer N. Output the following for each test case. If input is less than or equal to 100, output 'Good'. If input is greater than 100 but less than or equal to 200, output 'Better'. If the input is greater than 200, output 'Best'





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        if (N <= 100) cout << "Good" << endl;
        else if (N > 100 && N <= 200) cout << "Better" << endl;
        else cout << "Best" << endl;
    }
}