// Your program should take the name and hourly rate of a worker as input and then create instances of Worker with this input. Use dynamic method dispatch to call the displayInfo() method on each worker to display their information by creating pointer to employee class.




#include <bits/stdc++.h>
using namespace std;
class Employee {
public:
    string name;

    Employee(string name) : name(name) {}

    virtual void displayInfo() {
        cout << "Name: " << name << endl;
    }
};

class Worker : public Employee {
public:
    int hourlyRate;

    Worker(string name, int hourlyRate)
        : Employee(name), hourlyRate(hourlyRate) {}

    void displayInfo() override {
        Employee::displayInfo(); // Call the base class method
        cout << "Hourly Rate: $" << hourlyRate << endl;
    }
};

int main() {
    string name;
    int hourlyRate;

    cin >> name >> hourlyRate;

    Worker worker(name, hourlyRate);

    // Use dynamic method dispatch to display worker information
    Employee* emp = &worker;

    emp->displayInfo();
}
