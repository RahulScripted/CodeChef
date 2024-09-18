// Given model, rental rate, seats and number of rental days. Call the calculateRentalCost() function on the car object to calculate the rental cost. Display the calculated rental cost for the car.




#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string model;
    int rentalRate;

    Vehicle(string m, int r)
        : model(m), rentalRate(r) {}

    virtual int calculateRentalCost(int days) = 0;
};

class Car : public Vehicle {
private:
    int seats;

public:
    Car(string m, int r, int s)
        : Vehicle(m, r), seats(s) {}

    int calculateRentalCost(int days)  {
        return seats * rentalRate * days;
    }
};

int main() {
    string carModel;
    int rentalRate, seats, rentalDays;
    cin >> carModel >> rentalRate >> seats >> rentalDays;

    Car car(carModel, rentalRate, seats);

    // Calculate rental cost for the car
    int carCost = car.calculateRentalCost(rentalDays);

    cout << carCost << endl;

    return 0;
}