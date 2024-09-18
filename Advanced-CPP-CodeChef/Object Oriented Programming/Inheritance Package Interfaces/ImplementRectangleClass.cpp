// Implement a Rectangle Class




#include <iostream>
using namespace std;

class Shape {
protected:
    int area;

public:
    Shape() : area(0) {}

    virtual void printArea() {
        cout << "Area: " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {
        area = length * width;
    }

    void printArea() override {
        cout << "Rectangle Area: " << area << endl;
    }
};

int main() {
    Shape* s;
    Rectangle r(4,6);
    
    s = &r;
    s->printArea(); 
}