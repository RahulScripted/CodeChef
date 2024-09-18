// What is Variable scope and local scope




#include <iostream>
using namespace std;

int globalVar = 10;

void displayScopes() {
    int localVar = 20;

    cout << localVar << endl;
    cout << globalVar << endl;
}

int main() {
    displayScopes();
}