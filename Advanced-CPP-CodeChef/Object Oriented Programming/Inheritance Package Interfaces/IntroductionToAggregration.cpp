// Aggregation is a form of object composition in which one class contains or is composed of one or more objects of another class. Aggregation represents a "has-a" relationship between classes. It implies that one class (the whole or container) has objects of another class (the part or component).




#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string street_;
    string city_;
    string postalCode_;

    Address(string street, string city, string postalCode)
        : street_(street), city_(city), postalCode_(postalCode) {}

    void displayAddress() {
        cout << "Street: " << street_ << ", City: " << city_ << ", Postal Code: " << postalCode_ << endl;
    }
};

class Person {
public:
    string name_;
    int age_;
    Address address_;

    Person(string name, int age, Address address)
        : name_(name), age_(age), address_(address) {}

    void displayInfo() {
        cout << "Name: " << name_ << ", Age: " << age_ << endl;
        cout << "Address: ";
        address_.displayAddress();
    }
};

int main() {
    Address personAddress("123 Main St", "Cityville", "12345");
    Person person("John Doe", 30, personAddress);

    person.displayInfo();

    return 0;
}