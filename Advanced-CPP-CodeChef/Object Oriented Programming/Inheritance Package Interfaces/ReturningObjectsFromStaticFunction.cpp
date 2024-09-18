// Returning Object from Static function




#include <iostream>
#include <string>
using namespace std;

class Name {
public:
    string name; // Data member to store a name

    // Static method to concatenate two Name objects and return a new Name object
    static Name concatenateNames(Name obj1, Name obj2) {
        Name result;
        result.name = obj1.name + " " + obj2.name;
        return result;
    }
};

int main() {
    // Create an instance of the Name class and set the name data member
    Name name1;
    name1.name = "Tom";

    // Create another instance of the Name class and set the name data member
    Name name2;
    name2.name = "Jerry";

    // Use the concatenateNames static method to concatenate the names
    Name concatenatedName = Name::concatenateNames(name1, name2);

    // Display the concatenated name using the name data member of the result
    cout << concatenatedName.name << endl;

    return 0;
}