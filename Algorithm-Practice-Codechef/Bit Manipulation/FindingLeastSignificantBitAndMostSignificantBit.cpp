// Write a program to input an integer N. Print the position of the most significant bit, and print the least significant bit.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    // cout<<"Enter a number : ";
    cin>>num;

    int lsb = num & 1; // To get least significant bit
    
    // To get least significant bit we right shift by 1 bit
    int msb = 0; 
    while(num > 0){ 
        num = num >> 1;
        msb++;
    }
    cout<<(msb - 1)<<" "<<lsb<<endl;
}