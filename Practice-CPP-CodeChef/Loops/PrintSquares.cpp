// Write a program that utilizes a while loop to print the squares of numbers from 1 to N.


#include <iostream>
using namespace std;
int main() {
    int num;
    // cout<<"Enter the number : ";
    cin>>num;
    for(int i = 1;i <= num;i++){
        cout<<(i * i)<<" ";
    }
}


// Output: 5
// 1 4 9 16 25