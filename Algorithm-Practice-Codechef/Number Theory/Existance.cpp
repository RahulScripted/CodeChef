// Chef has two variables X and Y. He wants to find out whether the variables satisfy the equation: X^4 + 4 * y^2 = 4 * X^2 * Y


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int ValueOfX,ValueOfY;
        cout<<"Enter the value of X : ";
        cin>>ValueOfX;

        cout<<"Enter the value of Y : ";
        cin>>ValueOfY;

        if((ValueOfX * ValueOfX) == (ValueOfY * 2)) cout<<"Yes, satisfied"<<endl;
        else cout<<"No, not satisfied"<<endl;
    }
}