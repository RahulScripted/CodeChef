// Chef has two numbers A and B. In one operation, Chef can choose either A or B and multiply it by 2. Determine whether he can make both A and B equal after any number (possibly, zero) of moves.



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

        if(valueOfA == valueOfB) cout<<"Yes, he can make both A and B equal"<<endl;

        else if(valueOfA < valueOfB){
            while(valueOfA < valueOfB){
                valueOfA *= 2;
            }
            if(valueOfA == valueOfB) cout<<"Yes, he can make both A and B equal"<<endl;

            else cout<<"No, he can't make both A and B equal"<<endl;
        }
        else{
            while(valueOfA > valueOfB){
                valueOfB *= 2;
            }
            if(valueOfA == valueOfB) cout<<"Yes, he can make both A and B equal"<<endl;

            else cout<<"No, he can't make both A and B equal"<<endl;
        }
    }
}