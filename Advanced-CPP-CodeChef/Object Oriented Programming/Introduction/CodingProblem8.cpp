// Create a calculator class having two integers a and b as attributes. This class should also contain addition, subtraction and multiplication methods which prints the addition, subtraction and multiplication of these integers respectively.





#include <iostream>
using namespace std;

class Calculator {
    public: 
    int a;
    int b;

    void addition() {
        cout << a + b << endl;
    }

    void subtraction() {
        cout << a - b << endl;
    }

    void multiplication() {
        cout << a * b << endl;
    }
};

int main() {
    Calculator obj;
    cin >> obj.a >> obj.b;
    
    obj.addition();
    obj.subtraction();
    obj.multiplication();
}