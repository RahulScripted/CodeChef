// Alice likes numbers which are even, and are a multiple of 7. Bob likes numbers which are odd, and are a multiple of 9. Alice, Bob, and Charlie find a number A.

// 1.  If Alice likes A, Alice takes home the number.
// 2.  If Bob likes A, Bob takes home the number.
// 3.  If both Alice and Bob don't like the number, Charlie takes it home.

// Given A, find who takes it home.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA;
        cout<<"Enter the value of A : ";
        cin>>valueOfA;

        if(valueOfA % 2 == 0 && valueOfA % 7 == 0) cout<<"Alice takes "<<valueOfA<<" home"<<endl;

        else if(valueOfA % 2 != 0 && valueOfA % 9 == 0) cout<<"Bob takes "<<valueOfA<<" home"<<endl;

        else cout<<"Charlie takes "<<valueOfA<<" home"<<endl;
    }
}