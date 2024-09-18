// Given maker of car is "Toyota" and model is "Camry". Call the printInfo function on the Car object to display the car's information and the types of its wheels.




#include <iostream>
using namespace std;

class Wheel {
public:
    string type;

    Wheel(string type) : type(type) {}

    void printType() {
        cout << "Wheel Type: " << type << endl;
    }
};

class Car {
public:
    string make;
    string model;
    Wheel frontLeftWheel;
    Wheel frontRightWheel;
    Wheel rearLeftWheel;
    Wheel rearRightWheel;

    Car(string make, string model) 
        : make(make),
          model(model),
          frontLeftWheel("Front Left"),
          frontRightWheel("Front Right"),
          rearLeftWheel("Rear Left"),
          rearRightWheel("Rear Right") {}

    void printInfo() {
        cout << "Make: " << make << ", Model: " << model << endl;
        frontLeftWheel.printType();
        frontRightWheel.printType();
        rearLeftWheel.printType();
        rearRightWheel.printType();
    }
};

int main() {
    Car myCar("Toyota", "Camry");
    myCar.printInfo();

    return 0;
}
