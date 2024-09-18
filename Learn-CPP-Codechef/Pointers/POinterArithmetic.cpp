// Pointer arithmetic is a feature in programming languages like C and C++ that allows you to perform arithmetic operations on pointers.




#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    for (int i = 0; i < 5; i++) {
        cout << *ptr << endl;
        ptr++;
    }
}