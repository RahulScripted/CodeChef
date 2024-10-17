// Write a program that checks whether a given 3x3 matrix is symmetric (equal to its transpose) and prints the result as 'Yes' or 'No'.





#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    bool isSymmetric = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> matrix[i][j];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matrix[i][j] != matrix[j][i]) isSymmetric = 0;
        }
    }
    
    // Print the result
    if (isSymmetric) printf("Yes");
    else printf("No");
}