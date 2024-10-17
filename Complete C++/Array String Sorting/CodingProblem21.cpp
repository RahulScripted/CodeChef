// Write a program that takes a 3x3 matrix as input and calculates its transpose.





#include <iostream>
using namespace std;

int main() {
    int originalMatrix[3][3];
    int transposeMatrix[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> originalMatrix[i][j];
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) transposeMatrix[i][j] = originalMatrix[j][i];
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << transposeMatrix[i][j]<<" ";
        cout<<endl;
    }
}