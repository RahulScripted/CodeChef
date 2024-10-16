// Write a program which does the following: Declare two variables x and y. Assign the values "Hello" to variable x and "World" to variable y. Output x and y to the console. Don't forget to add a space in between them.





#include <iostream>
using namespace std;

int main() {
    string x, y;
    x = "Hello";
    y = "World";

    x = x + " " + y;
    cout << x << "\n";
}