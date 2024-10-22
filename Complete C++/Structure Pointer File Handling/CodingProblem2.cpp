// Create a structure named Rectangle with attributes length and width. Write a program that does the following:

// 1.  Accept the integer t - the number of test cases

// 2.  For each test case -  Accept the length and width of the rectangle as space separated inputs on a single line. Calculate the area of the rectangle. 

// Calculate the perimeter of the rectangle. Display the calculated area and perimeter.





#include <iostream>
using namespace std;

// Define the structure for Rectangle
struct Rectangle {
    int length;
    int width;
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        Rectangle rect;
        cin >> rect.length >> rect.width;
        
        int area = rect.length * rect.width;
        int perimeter = 2 * (rect.length + rect.width);
        cout << area << "\n" << perimeter << "\n";
    }

    return 0;
}