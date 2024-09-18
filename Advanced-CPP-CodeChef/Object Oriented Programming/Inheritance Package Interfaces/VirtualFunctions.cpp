// In C++, a virtual function is a member function declared within a base class that is intended to be overridden by derived classes. Virtual functions enable polymorphism, which allows different derived classes to provide their own implementations of the same function, and the appropriate implementation is determined at runtime based on the actual object type.




#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "This is an Animal." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "This is a Dog." << endl;
    }
};


int main() {
    Animal* ptr = new Dog();

    ptr->speak();
}