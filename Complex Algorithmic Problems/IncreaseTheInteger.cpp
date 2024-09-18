// Write a program that takes t test cases as input, then for each test case, reads an integer N, and prints N + 1.


#include <iostream>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
        int number;
        // cout<<"Enter a number : ";
        cin>>number;
        cout<<(number + 1)<<endl;
    }
}



// Output: 3           |       
//         4           |       5
//         2           |       3
//        -1           |       0