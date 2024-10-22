// Accept student information - Name, Roll number and their test scores and then prints out the average score for each student.





#include <iostream>
using namespace std;

// Define the structure for student information
struct Student {
    string name;
    int rollNumber;
    float marks[3];
};

int main() {
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++) {
        cin >> students[i].name;
        cin >> students[i].rollNumber;
        for (int j = 0; j < 3; j++) {
            cin >> students[i].marks[j];
        }
    }

    for (int i = 0; i < n; i++) {
        float totalMarks = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        float averageMarks = totalMarks / 3.0;
        cout << students[i].name;
        cout << " " << averageMarks << "\n";
    }

    return 0;
}