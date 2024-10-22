// Nested structure




#include <bits/stdc++.h>
using namespace std;

// Outer structure
struct Person {
    string name;
    int age;

    struct Address {
        string street;
        string city;
        string state;
    } address;
};

int main() {
    Person person1;

    person1.name = "Alice";
    person1.age = 25;

    // Assign values to nested structure members
    person1.address.street = "123 Main St";
    person1.address.city = "Cityville";
    person1.address.state = "Stateville";

    // Access and display structure members
    cout << "Name: " << person1.name << "\n";
    cout << "Age: " << person1.age << "\n";
    cout << "Address: " <<  person1.address.street << ", " << person1.address.city << ", " << person1.address.state;

    return 0;
}