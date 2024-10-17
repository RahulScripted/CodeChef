// Write a program that finds and prints the maximum element in a 3x3 matrix along with its row and column indices.





#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> matrix[i][j];
    }

    int maxElement = matrix[0][0];
    int maxRow = 0, maxColumn = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(maxElement < matrix[i][j]) {
                maxElement = matrix[i][j];
                maxRow = i;
                maxColumn = j;
            }
        }
    }
    
    cout << maxElement << "\n";
    cout << maxRow + 1 << " " << maxColumn + 1;
}