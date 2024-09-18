// Given an integer N, Calculate and print the number of digits present in N.


#include <iostream>
using namespace std;

int main() {
	int num;
    // cout<<"Enter the number : ";
	cin>>num;
    int digit = 0;
    while(num != 0){
        digit++;
        num /= 10;
    }
    // cout<<"No. of digits will be : ";
    cout<<digit;
}


// Output: 1257
//           4