// Write a program which does the following : Declare an integer variable i and initialise it to 0. Use the do/while loop to output i to the console as long as i is strictly less than 6.





#include <iostream>
using namespace std;

int main(){
    int i = 0;

    do {
        cout << i << "\n";
        i = i + 1;

    } while(i < 6);
}