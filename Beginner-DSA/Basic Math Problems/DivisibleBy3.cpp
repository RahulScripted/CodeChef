// Stack likes the number 3 a lot. He has two non-negative integers A and B. In one operation, Stack can do either of the following:

// 1.  A : = | A - B | (change A to | A - B |)
// 2.  B : = | A - B | (change B to | A - B |)

// Find the minimum number of operations after which at least one integer out of A and B becomes divisible by 3.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB;

        cout<<"Enter the value of A : ";
        cin>>valueOfA;

        cout<<"Enter the value of B : ";
        cin>>valueOfB;

        valueOfA %= 3;
        valueOfB %= 3;

        if(valueOfA == 0 || valueOfB == 0) cout<<"The minimum number of operations will be : 0"<<endl;

        else if(valueOfA == valueOfB) cout<<"The minimum number of operations will be : 1"<<endl;

        else cout<<"The minimum number of operations will be : 2"<<endl;
    }
}