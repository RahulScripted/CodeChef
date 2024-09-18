// Function overloading in C++ is a feature that allows you to define multiple functions with the same name but different parameter lists. The compiler distinguishes these functions based on the number or types of their parameters. This enables you to use the same function name for different behaviors, making your code more readable and flexible.




#include <iostream>
using namespace std;

class Calculator {
public:
   // returns sum of two integers
    int add(int a, int b) {
        return a + b;
    }

   // returns sum of two doubles
    double add(double a, double b) {
        return a + b;
    }

   // returns sum of three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    
    cout << calc.add(5, 3) << endl; // Calls the first add function
    cout << calc.add(2.5, 3.7) << endl; // Calls the second add function
    cout << calc.add(1, 2, 3) << endl; // Calls the third add function

    return 0;
}