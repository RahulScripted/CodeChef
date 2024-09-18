// Chef was recently studying the Bitwise OR operation, and stumbled upon the following problem: Let F(i) = 1 ∣ 2 ∣ 3 ∣ … ∣ i, where | denotes bitwise OR. You are given an integer N. Find the number of distinct i such that 2 ≤ i ≤ N and F(i) = F(i - 1).




#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    // cout<<"Enter the no. of test case : ";
    cin>>testCase;
    while(testCase--){
        int n;
        // cout<<"Enter a number : ";
        cin>>n;
        
        int x = (double)log(n)/(double)log(2);
        int ans = n-1-x;
        cout<<ans<<endl;
    }
}