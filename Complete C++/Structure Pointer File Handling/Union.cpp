// Union




#include <iostream>
using namespace std;

union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion u;

    u.intValue = 42;
    cout << "Integer Value: " << u.intValue << "\n";

    u.floatValue = 3.14;
    cout << "Float Value: " << u.floatValue << "\n";

    u.charValue = 'A';
    cout << "Char Value: " << u.charValue << "\n";

    return 0;
}