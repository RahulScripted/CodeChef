// Write a program which does the following : Create an int array containing the elements - 10, 20, 30, 40, 50, 60. Compile and output to the console the accurate count of the number of integer elements in the given array.




#include <iostream>
using namespace std;

int main() {
    int Num[6] = {10, 20, 30, 40, 50, 60};
    cout << sizeof(Num) / 4;
}