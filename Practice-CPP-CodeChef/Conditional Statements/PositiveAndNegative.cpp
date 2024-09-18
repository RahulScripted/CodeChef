// Write a program to check whether the given number as input is positive, negative, or zero.


#include <iostream>
using namespace std;
int main() {
    int num;
    // cout<<"Enter the number : ";
    cin>>num;
    if(num == 0) cout<<"Zero"<<endl;
    else if(num > 0) cout<<"Positive"<<endl;
    else cout<<"Negative"<<endl;
}