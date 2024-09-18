// You are tasked with creating a C++ program that calculates the area of a rectangle using user-provided length and width values. Your program should handle exceptions for invalid input, such as negative values, non-integer values, or non-numeric input.




#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int main() {
    int length, width;

    try {
        if (!(cin >> length)) {
            throw invalid_argument("Invalid Argument: Length and width must be integers.");
        }

        if (!(cin >> width)) {
            throw invalid_argument("Invalid Argument: Length and width must be integers.");
        }

        // Check for negative values
        if (length < 0 || width < 0) {
            throw invalid_argument("Invalid Argument: Length and width must be positive values.");
        }

        // Calculate the area of the rectangle
        int area = length * width;

        // Display the result
        cout << area << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "An unknown error occurred." << endl;
    }

    return 0;
}