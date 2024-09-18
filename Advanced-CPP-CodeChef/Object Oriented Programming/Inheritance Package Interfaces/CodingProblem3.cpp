// You are tasked with implementing a C++ class to represent complex numbers. Complex numbers have a real part (a) and an imaginary part (b), where i represents the square root of -1.




#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imaginary;

    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    void display() const {
        cout << real << " + " << imaginary << "i"<<endl;
    }

    // Declare the friend function
    friend Complex addComplex(const Complex& c1, const Complex& c2);
};

// Define the friend function for adding complex numbers
Complex addComplex(const Complex& c1, const Complex& c2) {
    double realSum = c1.real + c2.real;
    double imagSum = c1.imaginary + c2.imaginary;
    return Complex(realSum, imagSum);
}

int main() {
    // Create two complex numbers
    Complex complex1(3.0, 2.0);
    Complex complex2(1.0, 4.0);

    // Add the complex numbers using the friend function
    Complex result = addComplex(complex1, complex2);

    // Display the complex numbers and the result
    cout << "complex1: ";
    complex1.display();

    cout << "complex2: ";
    complex2.display();

    cout << "Result of addition: ";
    result.display();

    return 0;
}