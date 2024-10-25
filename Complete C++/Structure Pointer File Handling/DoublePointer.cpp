// Pointer to Pointer (Double pointer)





#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *ptr1 = &num;  // Regular pointer

    int **ptr2 = &ptr1;  // Pointer to pointer

    cout << "Value of num: "<< **ptr2;  // Output: 42

    return 0;
}