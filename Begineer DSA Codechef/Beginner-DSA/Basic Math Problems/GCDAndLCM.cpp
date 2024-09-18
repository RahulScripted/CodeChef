// Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.


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

        int gcd = 1;
        for(int i = 2;i <= min(valueOfA,valueOfB);i++){
            if((valueOfA % i) == 0 && (valueOfB % i) == 0) gcd = i;
        }

        long long lcm = ((long long)(valueOfA) / gcd * (valueOfB / gcd) * gcd);

        cout<<"GCD & LCM of "<<valueOfA<<" and "<<valueOfB<<" will be : "<<gcd<<" & "<<lcm<<endl;
    }
}