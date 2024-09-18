// Your task is very simple: given two integers A and B, write a program to add these two numbers and output the sum.


#include <iostream>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB;
        // cout<<"Enter the value of A : ";s
        cin>>valueOfA;

        // cout<<"Enter the value of B : ";
        cin>>valueOfB;

        // cout<<"Sum will be : ";
        cout<<(valueOfA + valueOfB)<<endl;
    }
}


// Output:  1
//          2 3
//          5