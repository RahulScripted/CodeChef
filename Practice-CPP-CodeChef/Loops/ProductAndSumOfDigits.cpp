// Given an integer N, Calculate and print the sum and product of its digit.


#include <iostream>
using namespace std;
int main() {
    int num;
    // cout<<"Enter the number : ";
    cin>>num;
    int sum = 0,product = 1;
    while(num != 0){
       int digit = (num % 10);
       sum += digit;
       product *= digit;
       num /= 10;
    }
    // cout<<"Sum and product of digits will be : ";
    cout<<sum<<" "<<product;
}


// Output: 22
//         4 4