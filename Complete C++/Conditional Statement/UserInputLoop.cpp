// Write a program which does the following : Declare a variable num and store a user defined input from the console in it. Declare a variable a and initialise it to 0. Use the while syntax to create a loop, output the following to the console. Print a in separate lines as long as it is strictly less than num. Increment a by 1 in each iteration.





#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    
    int a;
    a = 0;

    while(a < num) {
        cout << a << "\n";
        a = a + 1;
    }
}