// Write a program which does the following

// 1.  Declare a variable num and store a user defined input from the console in it

// 2.  Declare a variable a and initialise it to 0

// 3.  Use the while syntax to create a loop, output the following to the console

// 4.  Print a in separate lines as long as it is less than num. Increment a by 1 in each iteration.






#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num; 
    
    int i = 0;
    while(i < num){
        cout<<i<<endl;
        i++;
    }
}