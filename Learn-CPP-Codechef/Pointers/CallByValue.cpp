// In call by value, a copy of the actual argument's value is passed to the function parameter.




#include <iostream>
using namespace std;

void increment(int x) {
    x++;
    cout << "new value during function: " << x << endl;
}

int main() {
    int num = 5;
    increment(num);
    cout << "num after function call: " << num << endl;
    return 0;
}