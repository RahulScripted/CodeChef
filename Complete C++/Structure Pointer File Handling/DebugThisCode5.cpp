// Your task is to identify and correct these bugs so that the program prints the correct values. Expected output

// Value at doublePtr[0]: 10
// Value at doublePtr[1]: 20
// Value at doublePtr[2]: 30



// <------ Given Code ------->

/*

// The code below is incorrect. Debug this code to solve the problem

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrArr[3];

    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    int **doublePtr;

    *doublePtr = ptrArr;

    cout << "Value at doublePtr[0]: " << **doublePtr << "\n";
    cout << "Value at doublePtr[1]: " << **(doublePtr + 1) << "\n";
    cout << "Value at doublePtr[1]: " << **(doublePtr + 2) << "\n";

    return 0;
}


*/


// <------- After Debug --------->

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrArr[3];

    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;
    
    int **doublePtr = ptrArr;
    cout << "Value at doublePtr[0]: " << **doublePtr << "\n";
    cout << "Value at doublePtr[1]: " << **(doublePtr + 1) << "\n";
    cout << "Value at doublePtr[1]: " << **(doublePtr + 2) << "\n";
}