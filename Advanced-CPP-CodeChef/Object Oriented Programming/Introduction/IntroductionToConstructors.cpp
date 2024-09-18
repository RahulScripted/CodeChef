// Introduction to Constructors



#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    
    // Default constructor (no parameters)
    MyClass() {
        cout << "Default constructor called." << endl;
        value = 0;
    }

    // Parameterized constructor
    MyClass(int val) {
        cout << "Parameterized constructor called." << endl;
        value = val;
    }

    void displayValue() {
        cout << "Value: " << value << endl;
    }

};

int main() {
    MyClass obj1;
    MyClass obj2(42);

    obj1.displayValue();
    obj2.displayValue();
}