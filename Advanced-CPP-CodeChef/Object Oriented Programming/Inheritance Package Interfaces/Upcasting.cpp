// Upcasting in C++ is the process of converting or casting a reference or pointer from a derived class type to a base class type. It allows you to treat an object of a derived class as an object of its base class. Upcasting is a safe and implicit operation because every derived class is also a base class.




#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Circle circle;
    Shape* shapePtr = &circle;
    shapePtr->draw();
}
