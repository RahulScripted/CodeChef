// We define a structure named MyStruct using the struct keyword. Inside the structure, we declare three members: an int variable x, a double variable y, and a char variable c. In the main function, we declare a variable myObject of type MyStruct. This creates an instance of the structure. We access and initialize the structure members using the dot (.) operator. For example, myObject.x refers to the x member of the myObject structure.




#include <iostream>
using namespace std;

// Define the structure
struct MyStruct {
    int x;
    double y;
    char c;
};

int main() {
    // Declare and initialize a structure variable
    MyStruct myObject;
    myObject.x = 10;
    myObject.y = 3.14;
    myObject.c = 'A';

    // Access and use structure members
    cout << "x: " << myObject.x << endl;
    cout << "y: " << myObject.y << endl;
    cout << "c: " << myObject.c << endl;
}