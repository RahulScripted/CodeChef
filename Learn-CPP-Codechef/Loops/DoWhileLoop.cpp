// Write a program which does the following

// 1.  Declare an integer variable i and initialise it to 0

// 2.  Use the do/while loop to output i to the console as long as i is less than 6.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    do{
        cout << i << endl;
        i = i+1;
    }while(i < 6);
}