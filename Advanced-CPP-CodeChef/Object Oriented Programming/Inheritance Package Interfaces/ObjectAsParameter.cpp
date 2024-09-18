// In C++, you can pass objects as parameters to functions just like you pass other data types, such as integers or strings. When you pass an object as a parameter, you can either pass it by value or by reference, depending on your requirements. 




#include <iostream>
using namespace std;

class MyClass {
public:
    int data;
    MyClass(int val) : data(val) {}
};

// Function that modifies the object by reference
void modifyObjectByReference(MyClass& obj) {
    obj.data = 100; // Modify the original object
}

// Function that modifies a copy of the object
void modifyObjectByValue(MyClass obj) {
    obj.data = 200; // Modify the copy
}

int main() {
    MyClass original(42);

    cout << "Original data: " << original.data << endl; 

    // Pass a copy of the object and modify it
    modifyObjectByValue(original);
    cout << "Modified by value: " << original.data << endl; 

    // Pass the object by reference and modify it
    modifyObjectByReference(original);
    cout << "Modified by reference: " << original.data << endl; 

    return 0;
}