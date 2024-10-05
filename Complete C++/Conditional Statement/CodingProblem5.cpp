// Chef was given an integer input N. He wrote a code using while loops to output the sum of all integers from 1 to N. However, he has made an error in his code. Please debug his code to solve the problem!




#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;
    
    int i = 0;
    while (i <= N) {
        sum += i;
        i++;
    }
    
    cout << sum;
}