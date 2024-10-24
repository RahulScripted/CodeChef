// The code given in the IDE is incorrect - debug this code to get the following expected output.

// Course: Computer Science
// Student Name: Alice
// Roll Number: 101





#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
};

struct Course {
    string courseName;
    Student student;
};

int main() {
    Course course;

    course.courseName = "Computer Science";
    // Need to add .student to access the inner structure
    course.student.name = "Alice";
    course.student.rollNumber = 101;

    cout << "Course: " << course.courseName << "\n";
    cout << "Student Name: " << course.student.name << "\n";
    cout << "Roll Number: " << course.student.rollNumber << "\n";

    return 0;
}