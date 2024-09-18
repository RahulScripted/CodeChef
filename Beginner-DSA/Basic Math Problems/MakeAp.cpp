// Chef is given two integers A and C such that A ≤ C. Chef wants to find whether there exists any integer B such that A,B, and C are in arithmetic progression.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfC;
        
        cout<<"Enter the value of A : ";
        cin>>valueOfA;
        
        cout<<"Enter the value of C : ";
        cin>>valueOfC;

        if((valueOfA + valueOfC) % 2 == 0) cout<<valueOfA<<","<<((valueOfA + valueOfC) / 2)<<" and "<<valueOfC<<" are in arithmetic progression"<<endl;

        else cout<<valueOfA<<","<<((valueOfA + valueOfC) / 2)<<" and "<<valueOfC<<" are not in arithmetic progression"<<endl;
    }
}