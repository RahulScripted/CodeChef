// Nested class is a class that is defined within another class. These nested classes are sometimes referred to as "inner classes." Nested classes can have access to the private members of their enclosing class, which allows for encapsulation and organization of related functionality within a single class.




#include <iostream>
#include <string>
using namespace std;

class Person {
public:

    // Inner class Address
    class Address {
    public:
        void setAddress(string street, string city) {
            this->street = street;
            this->city = city;
        }

        void displayAddress() {
            cout << "Street: " << street << endl;
            cout << "City: " << city << endl;
        }

        string street;
        string city;
    };

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Address:" << endl;
        address.displayAddress();
    }

    void setPerson(string name, string street, string city) {
        this->name = name;
        address.setAddress(street,city);
    }

    string name;
    Address address;
};

int main() {
    Person person;
    person.setPerson("John","123 Main St", "Anytown");

    // Display the person's information
    person.displayPerson();

    return 0;
}