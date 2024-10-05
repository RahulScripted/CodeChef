// Write a program which does the following: Declare a variable a and initialise it to 0. Use the syntax above to create a loop, output the following to the console Print a in separate lines as long as it is less than or equal to (<=) 7. Increment a by 1 in each iteration.




#include <iostream>
using namespace std;

int main(){
    int a;
    a = 0;

    while(a <= 7) {
        cout << a << "\n";
        a = a + 1;
    }
}