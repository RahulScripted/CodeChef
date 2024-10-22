// Array of structures




#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

int main() {
    Rectangle rects[3];

    rects[0].length = 1;
    rects[0].width = 2;

    rects[1].length = 5;
    rects[1].width = 4;

    rects[2].length = 2;
    rects[2].width = 2;

    cout << "Area of Rectangle 1: " << rects[0].length * rects[0].width << "\n";
    cout << "Area of Rectangle 2: " << rects[1].length * rects[1].width << "\n";
    cout << "Area of Rectangle 3: " << rects[2].length * rects[2].width << "\n";
}