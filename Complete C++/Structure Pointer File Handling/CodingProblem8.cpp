// Create a program that converts temperatures between different units: Celsius, Fahrenheit, and Kelvin. Use a union to store the temperature value along with a flag indicating the unit. Implement the following functionalities:

// 1.  Input a temperature value and a unit (C, F, or K) from the user.

// 2.  Use a union to store the temperature value and unit flag.

// 3.  Implement conversion functions for each unit





#include <iostream>
using namespace std;

union Temperature {
    float celsius;
    float fahrenheit;
    float kelvin;
};

int main() {
    union Temperature temp;
    float inputTemp;
    char inputUnit;

    cin >> inputTemp;  
    cin >> inputUnit;  // Read character input

    switch (inputUnit) {
        case 'C':
            temp.fahrenheit = (inputTemp * 9/5) + 32;
            cout << temp.fahrenheit << "\n";
            temp.kelvin = inputTemp + 273.15;
            cout << temp.kelvin << "\n";
            break;

        case 'F':
            temp.celsius = (inputTemp - 32) * 5/9;
            cout << temp.celsius << "\n";
            temp.kelvin = (inputTemp - 32) * 5/9 + 273.15;
            cout << temp.kelvin << "\n";
            break;

        case 'K':
            temp.celsius = inputTemp - 273.15;
            cout << temp.celsius << "\n";
            temp.fahrenheit = (inputTemp - 273.15) * 9/5 + 32;
            cout << temp.fahrenheit << "\n";
            break;

    }

    return 0;
}