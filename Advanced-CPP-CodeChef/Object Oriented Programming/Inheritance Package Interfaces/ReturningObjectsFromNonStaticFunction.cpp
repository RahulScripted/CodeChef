// Returning Object from Non-static function



#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imaginary;

    // Constructor to initialize the real and imaginary parts
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Method to add two complex numbers and return the result
    Complex add(Complex other) {
        double resultReal = real + other.real;
        double resultImaginary = imaginary + other.imaginary;
        return Complex(resultReal, resultImaginary);
    }
};

int main() {
    // Create two complex numbers
    Complex num1(2.5, 3.0);
    Complex num2(1.0, -1.5);

    // Add the complex numbers
    Complex result = num1.add(num2);

    // Display the result of addition
    cout << "Result: " << result.real << " + " << result.imaginary << "i" << endl;
}