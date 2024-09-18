// Develop a function to compute and return the area of a rectangle, given its length and width.


#include <iostream>
using namespace std;
int calculateArea(int length, int width) {
    return (length * width);
}
int main() {
    int length, width;
    // cout<<"Enter the length : ";
    cin>>length;

    // cout<<"Enter the width : ";
    cin>>width;

    int area = calculateArea(length, width);
    cout<<"Area will be : ";
    cout << area;
}



// Output: 5 8
//          40