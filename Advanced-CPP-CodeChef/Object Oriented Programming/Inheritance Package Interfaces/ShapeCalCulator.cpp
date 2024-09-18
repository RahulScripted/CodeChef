// You are tasked with creating a class called ShapeCalculator that contains static methods for calculating the area of geometric shapes: squares and rectangles. Implement two static methods for calculating the area of these shapes. Create a class ShapeCalculator with the following public static member functions:

// 1.  static int calculateArea(int sideLength): Takes a int sideLength as a parameter and calculates the area of a square. Return the result.

// 2.  static int calculateArea(int length, int width): Takes two int, length and width, as parameters and calculates the area of a rectangle. Return the result.





#include <iostream>
using namespace std;

class ShapeCalculator {
public:
    // Calculate the area of a square
    static int calculateArea(int sideLength) {
        return sideLength * sideLength;
    }

    // Calculate the area of a rectangle
    static int calculateArea(int length, int width) {
        return length * width;
    }
};

int main() {
    int squareSide, length, width ;
    cin >> squareSide >> length >> width ;

    // Calculate the area of a square
    int squareArea = ShapeCalculator::calculateArea(squareSide);

    // Calculate the area of a rectangle
    int rectangleArea = ShapeCalculator::calculateArea(length, width);

    cout << squareArea << endl;
    cout << rectangleArea << endl;

    return 0;
}