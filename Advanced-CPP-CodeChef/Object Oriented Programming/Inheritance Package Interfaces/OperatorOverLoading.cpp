// Operator overloading in C++ allows you to define how operators should behave when used with user-defined data types (classes and structures). It allows you to customize the behavior of operators to work with objects of your own classes.




#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex(int _real, int _imaginary) : real(_real), imaginary(_imaginary) {}

    // Overload the + operator to add two Complex objects
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);

    Complex result = c1 + c2; // Uses the overloaded + operator

    cout << "Result: (" << result.real << ", " << result.imaginary << ")";
    return 0;
}
