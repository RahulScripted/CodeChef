// Write the methods of calculator class to display the addition.




#include <iostream>

using namespace std;

class Calculator {
private:
    int result;

public:
    // Constructor to initialize the result to zero
    Calculator() : result(0) {}

    // Method to set the result
    void setResult(int value) {
        result = value;
    }

    // Method to get the current result
    int getResult() {
        return result;
    }

    // Method to add two Calculator objects and return the result as a new Calculator object
    Calculator add(Calculator other) {
        Calculator newCalc;
        newCalc.setResult(result + other.getResult());
        return newCalc;
    }
};

int main() {
    Calculator calcA, calcB;
    int valueA, valueB;

    cin >> valueA >> valueB;
    calcA.setResult(valueA);
    calcB.setResult(valueB);

    Calculator resultCalc = calcA.add(calcB);

    cout << resultCalc.getResult() << endl;
}