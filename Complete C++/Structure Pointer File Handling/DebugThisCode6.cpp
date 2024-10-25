// you have to implement a function that takes double pointers to two integer variables and swaps them. Expected output - 5 10




// <------ Given Code -------->

/*

#include <iostream>
using namespace std;

void swap(int** a, int** b) {
    // Update the function to solve the problem
}

int main() {
    int a = 10, b = 5;

    int* c = &a;
    int* d = &b;

    swap(&c, &d);
    cout << a << " " << b << "\n";
}


*/

// <------ After Debug -------->

#include <iostream>
using namespace std;

void swap(int** a, int** b) {
    // Update the function to solve the problem
    int temp = **a;
    **a = **b;
    **b = temp;
}

int main() {
    int a = 10, b = 5;

    int* c = &a;
    int* d = &b;

    swap(&c, &d);
    cout << a << " " << b << "\n";
}