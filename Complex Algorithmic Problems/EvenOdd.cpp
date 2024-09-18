// Write a program that Accepts the count of test cases t, then for each test case, reads an integer num, checks if it's even using the isEven function, and outputs "Even" or "Odd" accordingly


#include <iostream>
using namespace std;
bool isEven(int num) {
    if(num % 2 == 0) return true;
    else return false;
}

int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
         int number;
        // cout<<"Enter a number : ";
        cin>>number;
        if(isEven(number)) cout<<"Even"<<endl;
        else cout<<"Odd"<<endl;
    }
}



// Output: 3       |
//         2       |      Even
//         6       |      Even
//         5       |      Odd