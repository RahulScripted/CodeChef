// Initialising allocated memory




#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int n = 5;
    
    ptr = new int[n] {1, 2, 3, 4, 5}; // Allocating memory for 5 integers

    if (ptr == NULL) {
        cout << "Memory allocation failed.\n";
        return 1;
    }

    // Access and manipulate the allocated memory
    for (int i = 0; i < n; i++) {
        cout << "ptr[" << i << "] = " << ptr[i] << "\n";
    }

    return 0;
}