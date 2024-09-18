// Given an integer N, print the number of elements between 1 and N that are not divisible by 2, 3, or 5.


#include <iostream>
using namespace std;

int main() {
    int num;
    // cout<<"Enter the number : ";
	cin>>num;
    int count = 0;
    for(int i = 1;i <= num;i++){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0) count++;
    }
    cout<<count<<endl;
}


// Output: 10
//         2