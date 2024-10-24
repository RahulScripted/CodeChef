// The code given in the IDE is incorrect - debug this code to get the following expected output.

// Student 1:
// Name: Alice
// Roll Number: 101
// Student 2:
// Name: Bob
// Roll Number: 102





#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
};

int main() {
    Student students[2] = {
        {"Alice", 101},
        {"Bob", 102}
    };

    for (int i = 0; i < 2; i++) {
        cout << "Student " << i + 1<< ":\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Roll Number: " << students[i].rollNumber << "\n";
    }

    return 0;
}