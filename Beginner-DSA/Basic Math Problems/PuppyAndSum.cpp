// Yesterday, puppy Tuzik learned a magically efficient method to find the sum of the integers from 1 to N. He denotes it as sum(N). But today, as a true explorer, he defined his own new function: sum(D, N), which means the operation sum applied D times: the first time to N, and each subsequent time to the result of the previous operation. Tuzik wants to calculate some values of the sum(D, N) function. Will you help him with that?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfSumApplied,number;
        
        cout<<"Enter a number of times sum applied : ";
        cin>>noOfSumApplied;
        
        cout<<"Enter a number : ";
        cin>>number;

        while(noOfSumApplied--){
            number = (number * (number + 1)) / 2;
        }

        cout<<"Result of "<<(noOfSumApplied, number)<<" function will be : "<<number<<endl;
    }
}