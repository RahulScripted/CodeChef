// Review the code given in the IDE to get the following output

// 42
// 3.14
// A





#include <iostream>
using namespace std;

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    Data data;

    data.intValue = 42;
    cout << data.intValue << "\n";

    data.floatValue = 3.14;
    cout <<  data.floatValue << "\n";
    
    data.charValue = 'A';
    cout <<  data.charValue << "\n";

    return 0;
}