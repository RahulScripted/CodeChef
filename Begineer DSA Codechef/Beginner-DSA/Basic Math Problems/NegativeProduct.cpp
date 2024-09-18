// Chef is given three numbers A,B, and C. He wants to find whether he can select exactly two numbers out of these such that the product of the selected numbers is negative.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB,valueOfC;

        cout<<"Enter the value of A : ";
        cin>>valueOfA;

        cout<<"Enter the value of B : ";
        cin>>valueOfB;
        
        cout<<"Enter the value of C : ";
        cin>>valueOfC;

        int first = (valueOfA * valueOfB);
        int second = (valueOfA * valueOfC);
        int third = (valueOfB * valueOfC);

        if(first < 0 || second < 0 || third < 0) cout<<"Yes, he can select exactly two numbers out of these such that the product of the selected numbers is negative"<<endl;

        else cout<<"No, he can't select exactly two numbers out of these such that the product of the selected numbers is negative"<<endl;
    }
}