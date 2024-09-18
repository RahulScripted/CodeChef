// Chef has scored A,B, and C marks in 3 different subjects respectively. Chef will fail if the average score of any two subjects is less than 35. Determine whether Chef will pass or fail.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int scoreOfSubjectA,scoreOfSubjectB,scoreOfSubjectC;

        cout<<"Enter the score in subject A : ";
        cin>>scoreOfSubjectA;

        cout<<"Enter the score in subject B : ";
        cin>>scoreOfSubjectB;

        cout<<"Enter the score in subject C : ";
        cin>>scoreOfSubjectC;

        if((scoreOfSubjectA + scoreOfSubjectB) / 2 >= 35){
            if((scoreOfSubjectA + scoreOfSubjectC) / 2 >= 35){
                if((scoreOfSubjectB + scoreOfSubjectC) / 2 >= 35)cout<<"Chef will pass"<<endl;

                else cout<<"Chef will fail"<<endl;
            }
            else cout<<"Chef will fail"<<endl;
        }
        else cout<<"Chef will fail"<<endl;
    }
}