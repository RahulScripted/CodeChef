// Chef has 2 numbers A and B ( A < B). Chef will perform some operations on A. In the ith operation: Chef will add 1 to A if i is odd. Chef will add 2 to A if i is even. Chef can stop at any instant. Can Chef make A equal to B?


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

        if((valueOfB - valueOfA) % 3 == 2) cout<<"A is not equal to B"<<endl;

        else cout<<"A is equal to B"<<endl;
    }
}