//  Given 3 integers - A,B and C - you need to find the difference between the highest and the lowest of the given 3 integers.





// Debug this code to solve the problem

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; 
    cin>>t;

    for(int i = 1; i <= t; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        
        int maximum = max(B, max(B, C));
        int minimum = min(A, min(B, B));

        int D = maximum - minimum;

        cout << D << "\n";
    }
    return 0;
}