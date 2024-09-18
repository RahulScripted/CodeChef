// You are tasked with creating a C++ program that manages a student grading system and handles exceptions using nested try-catch blocks.




#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    Student(const string& studentName, int studentScore) : name(studentName), score(studentScore) {}

    string getName() const {
        return name;
    }

    int getScore() const {
        return score;
    }
};

int main() {
    try {
        // Create a Student object with predefined values
        Student student("Alice", -90);

        try {
            // Check if the student's score is within the valid range (0-100)
            if (student.getScore() < 0 || student.getScore() > 100) {
                throw invalid_argument("Invalid score.");
            }

            // Display student information if the score is valid
            cout << "Student Name: " << student.getName() << endl;
            cout << "Student Score: " << student.getScore() << endl;

        } catch (const invalid_argument& e) {
            cout<<e.what()<<endl;
        }

    } catch (...) {
        cout<<"An unknown error occured"<<endl;
    }

    return 0;
}
