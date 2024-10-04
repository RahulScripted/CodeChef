// Take input from the user with value between 1 and 7. Compute and output to the console the day associated with that number.





#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    cin >> dayNumber;

    switch (dayNumber) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }
}