// Write a class Rectangle with length and breadth as attribute and area and perimeter as methods. Given length and breadth as input, Print area and perimeter of rectangle using area and perimeter methods respectively.




#include <iostream>

using namespace std;

class Rectangle {
    public: int length;
    int breadth;

    void area() {
        cout << length * breadth << endl;
    }
    void perimeter() {
        cout << 2 * (length + breadth) << endl;
    }
};

int main() {
    Rectangle r;
    cin >> r.length >> r.breadth;
    r.area();
    r.perimeter();
    return 0;
}