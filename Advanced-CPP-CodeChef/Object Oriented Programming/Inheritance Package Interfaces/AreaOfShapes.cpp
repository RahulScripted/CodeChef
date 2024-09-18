// Create a program to model a hierarchy of shapes. You will have a base class called Shape and two derived classes, Square and Rectangle. Given the dimension of square and rectangle. Display the area using calculateArea().




#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    // Pure virtual function to calculate the area
    virtual int calculateArea() const = 0;
};

class Square : public Shape {
public:
    int side;
    Square(int _side) : side(_side) {}

    // Override the pure virtual function to calculate the area of the square
    int calculateArea() const override {
        return side * side;
    }

};

class Rectangle : public Shape {
public:
    int length,width;
    Rectangle(int _length, int _width) : length(_length), width(_width) {}

    // Override the pure virtual function to calculate the area of the rectangle
    int calculateArea() const override {
        return length * width;
    }

};

int main() {
    int side,length,width;
    cin>>side>>length>>width;

    // Create objects of Square and Rectangle
    Square square(side);
    Rectangle rectangle(length, width);
    
    cout<<square.calculateArea()<<endl;
    cout<<rectangle.calculateArea()<<endl;

    return 0;
}