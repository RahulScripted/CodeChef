// You are tasked with implementing a simple School Management System in C++ using classes. The system should allow you to create a School and enroll Student objects into it. Each Student should have a name.




#include <iostream>
#include <string>
using namespace std;

class School {
public:
    class Student {
    public:
        Student(string name) : name(name) {}

        void display() {
            cout << name << endl;
        }

    private:
        string name;
    };

    School(string schoolName, const Student& student) : schoolName(schoolName), student(student) {}

    void displaySchoolInfo() {
        cout << schoolName << endl;
        student.display();
    }

private:
    string schoolName;
    Student student; 
};

int main() {
    School::Student student("Alice");
    School school("ABC School", student);

    school.displaySchoolInfo();

    return 0;
}