// Hrishi wanted to output Result: 2.50 but it gives 2. Fix the code




#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 2;

    float result = (float)(x) / y;
    cout << "Result: " << result;
}