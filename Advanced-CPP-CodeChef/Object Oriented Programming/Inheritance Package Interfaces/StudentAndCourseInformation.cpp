// Implement a Student class with a nested Course class, allowing users to store and display student details along with the course they are enrolled in.



#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // Constructor to initialize student's name
    Student(string _name,string _courseName) {
        name = _name;
        course.setData(_courseName);
    }

    // Nested Course class within the Student class
    class Course {
    public:
        string courseName;

        void setData(string _courseName){
            courseName = _courseName;
        }

        // Display the student's name and course name
        void display() {
            cout << courseName << endl;
        }
    };

    // Display the student's name
    void display() {
        cout <<  name << endl;
        course.display();
    }

    string name;
    Course course;
};

int main() {
    // take inputs
    string studentName,courseName;
    cin>>studentName>>courseName;
    
    // Create a student and a course
    Student student(studentName,courseName);

    // Display student's name
    student.display();
    return 0;
}