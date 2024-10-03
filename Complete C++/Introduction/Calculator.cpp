// Write a program which does the following: Create a calculator. Declare 2 integer variables a and b. Initialise the variables a and b based on two user inputs. Declare an integer variable sum - and store the value of addition of a and b. Declare an integer variable diff - and store the value of subtraction of a and b. Output sum and diff to the console on separate lines.




#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum, diff;

    cin >> a;
    cin >> b;

    sum = a + b;
    diff = a - b;

    cout << "Sum is: " << sum << "\n";
    cout << "Difference is: " << diff;
}