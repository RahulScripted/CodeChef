// Given A,B, and C as the sides of a triangle, find whether the triangle is scalene.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfA,lengthOfB,lengthOfC;

        cout<<"Enter the length Of A : ";
        cin>>lengthOfA;

        cout<<"Enter the length Of B : ";
        cin>>lengthOfB;

        cout<<"Enter the length Of C : ";
        cin>>lengthOfC;

        if(lengthOfA != lengthOfB && lengthOfA != lengthOfC && lengthOfB != lengthOfC) cout<<"The triangle is scalene"<<endl;

        else cout<<"The triangle is not scalene"<<endl;
    }
}