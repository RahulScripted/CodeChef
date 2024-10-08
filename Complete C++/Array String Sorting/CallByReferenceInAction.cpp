// Write a code which does the following : Accepts 3 integer inputs from the user. Prints out the maximum and the minimum of these 3 integers on separate lines. Update the function and use what you have learnt in pointers




#include <iostream>
using namespace std;

void findMaxMin(int *a, int *b, int *c, int *max, int *min) {
    *max = *a;
    *min = *a;
    
    if (*b > *max) *max = *b;
    if (*c > *max) *max = *c;

    if (*b < *min) *min = *b;
    if (*c < *min) *min = *c;
}

int main() {
    int num1, num2, num3;
    int max, min;

    // Read three integer values from the user
    cin >> num1 >> num2 >> num3;

    // Call the function to find the maximum and minimum
    findMaxMin(&num1, &num2, &num3, &max, &min);

    // Print the maximum and minimum values
    cout << min << " " << max << "\n";

    return 0;
}