// You are tasked with creating a C++ program to manage student enrollments in courses. Implement two classes, Course and Student, to represent courses and students, and develop a program that allows students to enroll in courses and list their enrolled courses.




#include <bits/stdc++.h>
using namespace std;

class Course {
public:
    string courseName;

    Course(string courseName)
        : courseName(courseName) {}
};

class Student {
public:
    string studentName;
    vector<Course> courses;

    Student(string studentName)
        : studentName(studentName) {}

    void listEnrolledCourses() {
        for (Course course : courses) {
            cout << course.courseName << " ";
        }
        cout << endl;
    }
};

int main() {
    Course course1("Introduction to Programming");
    Course course2("Data Structures");

    Student student1("Alice");
    Student student2("Bob");

    student1.courses.push_back(course1);
    student1.courses.push_back(course2);
    student2.courses.push_back(course1);

    cout << "Courses enrolled by Alice: ";
    student1.listEnrolledCourses();

    cout << "Courses enrolled by Bob: ";
    student2.listEnrolledCourses();

    return 0;
}