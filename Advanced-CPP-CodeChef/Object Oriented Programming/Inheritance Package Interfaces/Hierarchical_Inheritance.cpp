// Hierarchical inheritance




#include <iostream>

using namespace std;

// Base class
class Animal {
    protected: string name;

    public: Animal(string _name): name(_name) {}

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

// Derived class 1
class Dog: public Animal {
    public: Dog(string _name): Animal(_name) {}

    void Bark() {
        cout << name << " is barking." << endl;
    }
};

// Derived class 2
class Cat: public Animal {
    public: Cat(string _name): Animal(_name) {}

    void Meow() {
        cout << name << " is meowing." << endl;
    }
};

int main() {
    // Create instances of derived classes
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    // Call methods from the base class and derived classes
    myDog.Eat();
    myDog.Bark();

    myCat.Eat();
    myCat.Meow();

    return 0;
}