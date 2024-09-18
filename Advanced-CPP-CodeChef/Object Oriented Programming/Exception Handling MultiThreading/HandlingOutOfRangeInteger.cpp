// Create a C++ program that reads an integer from the user and handles the case when the entered integer is outside a specified valid range.




#include <iostream>
#include <stdexcept>
using namespace std;

const int MIN_VALUE = -1000;
const int MAX_VALUE = 1000;

int main() {
    try {
        int value = 2000;

        if (value < MIN_VALUE || value > MAX_VALUE) {
            throw out_of_range("Entered integer is out of the specified range.");
        }

        cout << "You entered: " << value << endl;
    }
    catch (const out_of_range& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}