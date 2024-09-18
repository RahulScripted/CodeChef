// Create a C++ program that performs a division operation and handles the case when division by zero occurs. Implement the following components:

// 1.  Create a function called safeDivision that takes two integer parameters, numerator and denominator, and returns the result of dividing the numerator by the denominator.

// 2.  Inside the safeDivision function, include error handling to check if the denominator is zero.

// 3.  If the denominator is zero, throw a user-defined exception named DivisionByZeroException with the error message "Division by zero is not allowed."

// 4.  Define the DivisionByZeroException class, which is derived from std::exception, to handle division by zero.

// 5.  Include a constructor that allows you to provide a custom error message.

// 6.  In the main function: Call the safeDivision function with numerator = 8 and denominator = 0.

// 7.  If division by zero occurs, catch the DivisionByZeroException and display the error message "Error: Division by zero is not allowed."





#include <iostream>
#include <stdexcept>
using namespace std;

class DivisionByZeroException : public exception {
public:
    DivisionByZeroException(const char* message) : msg(message) {}

    // Override the what() method to provide an error message.
    const char* what() const throw() {
        return msg.c_str();
    }

private:
    string msg;
};

int safeDivision(int numerator, int denominator) {
    if (denominator == 0) {
        throw DivisionByZeroException("Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main() {
    try {
        int numerator = 8;
        int denominator = 0;

        int result = safeDivision(numerator, denominator);
        cout << "Result of division: " << result << endl;
    }
    catch (const DivisionByZeroException& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}