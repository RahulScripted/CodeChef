// You are tasked with implementing a program that calculates the square root of a given integer. However, to ensure the validity of the input, you need to incorporate error handling using C++'s std::invalid_argument exception class.




#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

// Function to calculate the square root of an integer
double calculateSquareRoot(int num) {
    if (num < 0) {
        throw invalid_argument("Invalid argument. Input must be a non-negative integer.");
    }
    return sqrt(num);
}


int main() {
    int input = -2;

    try {
        double squareRoot = calculateSquareRoot(input);
        cout << squareRoot << endl;
    }
    catch (const invalid_argument& ex) {
        cout << ex.what() << endl;
    }

    return 0;
}