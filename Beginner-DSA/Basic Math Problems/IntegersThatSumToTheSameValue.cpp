// Alice has a positive integer N. She is wondering how many ordered pairs of positive integers (i,j) exist such that i + j = N. Help Alice figure out the answer.


#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"The answer will be : "<<(number - 1)<<endl;
}