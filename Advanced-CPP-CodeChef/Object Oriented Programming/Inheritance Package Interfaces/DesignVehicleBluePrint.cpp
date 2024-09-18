// Create a C++ program that models a simple vehicle blueprint. You should have two classes: Vehicle (the abstract base class) and Car (the derived class).




#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    string name;
    Vehicle(string n) : name(n) {}
    virtual void startEngine() = 0;
};

class Car : public Vehicle {
public:
    Car(string n) : Vehicle(n) {}
    void startEngine() {
        cout << "Car engine started for " << name << "." << endl;
    }
};

int main() {
    string carName = "Nano";
    Car myCar(carName);
    myCar.startEngine();
}