// Create objects of Dog and Cat. Call the makeSound() function on each object to display the sound each animal makes.




#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() const {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog says: Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat says: Meow! Meow!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    
    dog.makeSound();
    cat.makeSound();
}