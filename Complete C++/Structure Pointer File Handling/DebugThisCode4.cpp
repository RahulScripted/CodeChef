// Review the code given in the IDE to get the following output

// 12
// 3.14





#include <iostream>
using namespace std;

union Data {
    int intValue;
    float floatValue;
};

int main() {
    Data data;

    data.intValue = 12;
    cout << data.intValue << "\n";

    data.floatValue = 3.14;
    cout << data.floatValue << "\n";

    return 0;
}