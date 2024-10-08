// Call by Reference




#include <iostream>
using namespace std;

void incrementByReference(int *x) {
    (*x)++;
    cout << "New value during function: " << *x << "\n"; 
}

int main() {
    int num = 5;
    incrementByReference(&num);
    cout << "Num after function call: " << num; 
    return 0;
}