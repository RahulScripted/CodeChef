// Call by value




#include <iostream>
using namespace std;

void increment(int x) {
    x++;
    cout << "New value during function: " << x << "\n";
}

int main() {
    int num = 5;
    increment(num);
    cout << "Num after function call: " << num;
    return 0;
}