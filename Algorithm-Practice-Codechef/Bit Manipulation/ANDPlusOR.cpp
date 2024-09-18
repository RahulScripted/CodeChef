// Given an integer x, find two non-negative integers a and b such that (a ∧ b) + (a ∨ b) = x, where ∧ is the bitwise AND operation and ∨ is the bitwise OR operation.



#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long int x;
        cin>>x;
        if(x == 0) cout<<-1<<endl;
        else cout<<0<<" "<<x<<endl;
    }
}