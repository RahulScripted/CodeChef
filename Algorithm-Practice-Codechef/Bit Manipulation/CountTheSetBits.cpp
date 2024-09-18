// Write a program that takes an input integer N and prints the count of the set bits present in the number.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    // cout<<"Enter a number : ";
    cin>>num;
    cout<<__builtin_popcount(num)<<endl;
}
