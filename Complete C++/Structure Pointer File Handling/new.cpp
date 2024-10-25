// The new operator is used to allocate a block of memory of a specified size.




#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int n = 5;
    
    ptr = new int[n]; // Allocating memory for 5 integers

    if (ptr == NULL) {
        cout << "Memory allocation failed.\n";
        return 1;
    }

    // Access and manipulate the allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = i * 10;
        cout << "ptr[" << i << "] = " << ptr[i] << "\n";
    }

    return 0;
}