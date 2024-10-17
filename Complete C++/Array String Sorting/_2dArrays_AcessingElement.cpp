// Write a code which takes the given matrix as input. Change all elements of the input matrix such that each element in the new matrix is twice of the original matrix.





#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << (2 * matrix[i][j])<<" ";
        }
        cout<<endl;
    }
}