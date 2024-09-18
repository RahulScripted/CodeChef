// What is null ptr



#include <iostream>
using namespace std;

void printValue(int *ptr) {
    if (ptr != nullptr) cout << "Value: " << *ptr << endl; 
    else cout << "Pointer is null" << endl;
}

int main() {
    int *ptr = nullptr; 
    printValue(ptr);
    return 0;
}