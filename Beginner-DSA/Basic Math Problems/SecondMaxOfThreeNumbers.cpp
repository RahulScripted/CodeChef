// Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number1,number2,number3;

        cout<<"Enter the value of 1st number : ";
        cin>>number1;

        cout<<"Enter the value of 2nd number : ";
        cin>>number2;

        cout<<"Enter the value of 3rd number : ";
        cin>>number3;

        if(number1 > number2 && number1 > number3){

            if(number2 > number3) cout<<"Second maximum number will be : "<<number2<<endl;

            else cout<<"Second maximum number will be : "<<number3<<endl;
        }
        else if(number2 > number1 && number2 > number3){

            if(number1 > number3) cout<<"Second maximum number will be : "<<number1<<endl;

            else cout<<"Second maximum number will be : "<<number3<<endl;
        }
        else{

            if(number1 > number2) cout<<"Second maximum number will be : "<<number1<<endl;

            else cout<<"Second maximum number will be : "<<number2<<endl;
        }
    }
}