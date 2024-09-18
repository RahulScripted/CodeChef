// In C++, a virtual base class is a class that is used to prevent the creation of multiple instances of the same base class in complex inheritance hierarchies. It is employed to solve the "diamond problem" that can occur in multiple inheritance scenarios.



#include <iostream>
using namespace std;

class Animal {
public:
    string name;

    Animal(string name){
        this->name = name;
    }

    void speak() {
        cout << name << " makes a sound." << endl;
    }
};

class Mammal : virtual public Animal {
public:
    Mammal(string name) : Animal(name) {}
};

class Bird : virtual public Animal {
public:
    Bird(string name) : Animal(name) {}
};

class Bat : public Mammal, public Bird {
public:
    Bat(string name) : Animal(name), Mammal(name), Bird(name) {}
};

int main() {
    Bat bat("Bat");
    bat.speak(); // Outputs: Bat makes a sound.

    return 0;
}
