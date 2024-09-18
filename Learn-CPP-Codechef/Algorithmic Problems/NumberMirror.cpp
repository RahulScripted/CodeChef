// Write a program in the IDE which does the following Accepts the count of test cases - t - in the 1st line. The only line of each test case consists of an integer N You need to generate the following output - Change the sign of N.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        cout << N * (-1) << endl;
    }
}