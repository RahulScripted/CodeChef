// Array of pointers





#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrArray[3];  // Array of pointers to integers

    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;
    
    cout << "Value at ptrArray[0]: " << *ptrArray[0] << "\n";
    cout << "Value at ptrArray[1]: " << *ptrArray[1] << "\n";
    cout << "Value at ptrArray[2]: " << *ptrArray[2] << "\n"; 

    return 0;
}
