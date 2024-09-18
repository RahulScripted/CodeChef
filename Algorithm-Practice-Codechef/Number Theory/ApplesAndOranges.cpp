// Rushitote went to a programming contest to distribute apples and oranges to the contestants. He has N apples and M oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that: 

// 1. Every contestant gets an equal number of apples; and
// 2. Every contestant gets an equal number of oranges.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfOranges,noOfApples;
        cout<<"Enter the no. of oranges : ";
        cin>>noOfOranges;

        cout<<"Enter the no. of apples : ";
        cin>>noOfApples;

        cout<<"The maximum possible number of contestants will be : "<<__gcd(noOfOranges,noOfApples)<<endl;
    }
}