// Swaps 2 numbers using Pointers




#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    swap(&num1, &num2);
    cout << num1 << ' ' << num2 << "\n";
}