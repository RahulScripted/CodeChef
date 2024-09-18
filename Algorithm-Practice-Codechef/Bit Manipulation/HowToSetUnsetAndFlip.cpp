// Given a number N. Perform the following operations: Set the first bit, Unset the second bit, and flip the third bit from the right hand side. Print the number.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    // cout<<"Enter a number : ";
    cin>>num;
    
    num = num | (1 << 0); // Setting the first bit
    num = num & ~(1 << 1); // unset the second bit
    num = num ^ (1 << 2); // Flip the third bit
    cout<<num<<endl;
}
