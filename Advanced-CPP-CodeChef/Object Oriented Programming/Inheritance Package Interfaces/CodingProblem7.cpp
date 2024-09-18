// You are tasked with creating a basic shape modeling application with two types of shapes: Square and Rectangle. Both shape types should be derived from an abstract base class called Shape. Each shape should have an area calculation method. Implement the Shape class with pure virtual function. Implement the Square class and Rectangle class as derived classes from Shape, and provide the necessary implementations for the calculateArea() method. Create instances of both Square and Rectangle, calculate and display their areas.




#include <iostream>
using namespace std;

// Abstract base class Shape
class Shape {
public:
    // Pure virtual function for calculating area
    virtual int calculateArea() = 0;
};

// Derived class Square
class Square : public Shape {
public:
    int side;

    Square(int sideLength) : side(sideLength) {}

    // Implementation of calculateArea for Square
    int calculateArea() override {
        return side * side;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    int length;
    int width;

    Rectangle(int length, int width) : length(length), width(width) {}

    // Implementation of calculateArea for Rectangle
    int calculateArea() override {
        return length * width;
    }
};

int main() {
    int squareSide,rectangleLength,rectangleBreadth;
    cin >> squareSide >> rectangleLength >> rectangleBreadth;

    // Create a Square with a side length of 5 units
    Square square(squareSide);

    // Create a Rectangle with length 4 units and width 6 units
    Rectangle rectangle(rectangleLength, rectangleBreadth);

    // Calculate and display the areas
    cout << square.calculateArea() << endl;
    cout << rectangle.calculateArea() << endl;
}