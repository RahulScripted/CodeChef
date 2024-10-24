// You are working on a program that needs to store information about students. Since students can have different types of information, you decide to use a union to represent their data. The code in the IDE does the following

// 1.  Declare a union named StudentInfo with the following members:

// 2.  rollNumber of type int

// 3.  name of type char[50]

// 4.  marks of type float

// 5.  Accept user input consisting of 2 lines

// 6.  1st line is the value 1 / 2 / 3 indicating rollNumber, name or marks

// 7.  2nd line has the rollNumber, name or marks


// Use a switch statement to identify the type of information entered and store it in the appropriate member of the union. Output the student's information.





#include <iostream>
using namespace std;

union StudentInfo {
    int rollNumber;
    char name[100];
    float marks;
};

int main() {
    int T;
    cin >> T;
    StudentInfo student;

    while (T--) {
        int choice;
        
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> student.rollNumber;
                cout << student.rollNumber << " ";
                break;

            case 2:
                cin >> student.name;
                cout << student.name << " ";
                break;

            case 3:
                cin >> student.marks;
                cout << student.marks << " ";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    }

    return 0;
}