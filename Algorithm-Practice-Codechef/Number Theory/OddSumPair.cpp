// Chef has 3 numbers A,B and C. Chef wonders if it is possible to choose exactly two numbers out of the three numbers such that their sum is odd.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int ValueOfA,ValueOfB,ValueOfC;
        cout<<"Enter the value of A : ";
        cin>>ValueOfA;

        cout<<"Enter the value of B : ";
        cin>>ValueOfB;

        cout<<"Enter the value of C : ";
        cin>>ValueOfC;

        if((ValueOfA + ValueOfB) % 2 != 0) cout<<"Yes, it is possible to choose exactly two numbers out of the three numbers"<<endl;

        else if((ValueOfA + ValueOfC) % 2 != 0) cout<<"Yes, it is possible to choose exactly two numbers out of the three numbers"<<endl;

        else if((ValueOfC + ValueOfB) % 2 != 0) cout<<"Yes, it is possible to choose exactly two numbers out of the three numbers"<<endl;

        else cout<<"No, it is not possible to choose exactly two numbers out of the three numbers"<<endl;
    }
}