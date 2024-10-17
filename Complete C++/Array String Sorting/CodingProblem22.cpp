// Write a program that calculates and prints the sum of the diagonal elements of a 3x3 matrix.





#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int sum = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> matrix[i][j];
    }

    for(int i = 0;i < 3;i++) sum += matrix[i][i];
    cout << sum;
}