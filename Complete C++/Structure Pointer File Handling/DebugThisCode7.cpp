// Let's say you're working on a program that uses macros to define constants for calculations. However, you are encountering unexpected results when using these macros. You suspect that the macro expansion is not working as intended.








#include <iostream>
using namespace std;

#define SQUARE(x) (x) * (x)

int main() {
    int num = 5;
    int result = SQUARE(num + 1);

    cout << "Result: " << result << "\n";

    return 0;
}
