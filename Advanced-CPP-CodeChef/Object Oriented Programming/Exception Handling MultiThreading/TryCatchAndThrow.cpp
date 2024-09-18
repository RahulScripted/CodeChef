// In C++, the try and catch blocks are fundamental components of exception handling. They allow you to gracefully handle exceptions that may occur during the execution of your code. 



#include <iostream>
using namespace std;

int main() {
    try {
        // Code that might throw an exception
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            throw "Division by zero is not allowed.";
        }

        int result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const char* error_message) {
        // Handle the exception
        cout << error_message << endl;
    }

    cout << "Program continues to execute after the exception." << endl;

    return 0;
}