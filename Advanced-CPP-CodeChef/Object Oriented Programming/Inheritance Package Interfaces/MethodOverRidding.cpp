// Method overriding in C++ allows a child class to provide a specific implementation for a function that is already defined in its parent class. This enables polymorphism, where the same function name behaves differently depending on the object's actual runtime type.




#include <iostream>
using namespace std;

class Parent {
public:
    void showMessage() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void showMessage() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child childObj; 
    childObj.showMessage();
}