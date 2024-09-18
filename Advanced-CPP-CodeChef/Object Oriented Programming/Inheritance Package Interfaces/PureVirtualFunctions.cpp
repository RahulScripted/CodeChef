// Pure virtual functions (also known as abstract functions) in C++ are special member functions declared in an abstract base class but have no implementation in the base class. These functions are declared using the virtual keyword and set to 0 (zero) as their implementation, indicating that they have no defined behavior in the base class.




#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    virtual void pureVirtualFunction() = 0;
};

class Derived : public Base {
public:
    void pureVirtualFunction() {
        cout << "Base Class" << endl;
    }
};


int main() {
    Base* obj = new Derived();
    obj->pureVirtualFunction();
}