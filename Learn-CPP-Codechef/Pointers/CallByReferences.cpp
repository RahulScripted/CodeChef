// In call by reference, a reference to the actual argument's memory location is passed to the function parameter.




#include <iostream>
using namespace std;

void increment(int *x) {
    (*x)++;
    cout << "new value during function: " << *x << endl;
}

int main() {
    int num = 5;
    increment(&num);
    cout << "num after function call: " << num << endl;
    return 0;
}