// Write a program to find the remainder when an integer A is divided by an integer B.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfIntegerA,valueOfIntegerB;
        
        cout<<"Enter the value of A : ";
        cin>>valueOfIntegerA;
        
        cout<<"Enter the value of B : ";
        cin>>valueOfIntegerB;

        cout<<"The remainder when an integer "<<valueOfIntegerA<<" is divided by an integer "<<valueOfIntegerB<<" will be : "<<(valueOfIntegerA % valueOfIntegerB)<<endl;
    }
}