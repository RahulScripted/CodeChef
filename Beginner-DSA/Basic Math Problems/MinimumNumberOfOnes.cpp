// Your teacher gave you an assignment — given an integer N, construct a binary string B = b1b2b3…bN of length N such that: max (bi,bi+1) = 1 for every i from 1 to N − 1. What is the minimum number of 1's such a binary string can contain?



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfN;
        
        cout<<"Enter the value of N : ";
        cin>>valueOfN;

        if((valueOfN % 2) == 0) cout<<"The minimum number of 1's such a binary string can contain will be : "<<(valueOfN / 2)<<endl;

        else cout<<"The minimum number of 1's such a binary string can contain will be : "<<((valueOfN - 1) / 2)<<endl;
    }
}