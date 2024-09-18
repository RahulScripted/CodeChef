// You are tasked with implementing a class called Matrix to represent 2D matrices in C++. The class should allow you to perform matrix addition using the overloaded + operator.




#include <iostream>
#include <vector>
using namespace std;

class Matrix {
public:
    int rows;
    int columns;
    vector<vector<int>> data;

    // Constructor to initialize the matrix with zeros
    Matrix(int _rows, int _columns) : rows(_rows), columns(_columns) {
        data.resize(rows, vector<int>(columns, 0));
    }

    // Overload the + operator to add two matrices
    Matrix operator+(const Matrix& other) {
        // create a resultant matrix and return it 
        // resultant matrix = data + other.data
        Matrix result(rows, columns);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    // Display the matrix
    void display() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create two matrices
    Matrix matrix1(2, 2);
    Matrix matrix2(2, 2);

    // Initialize matrix1 and matrix2 with values
    // For simplicity, we use sequential values in this example
    int value = 1;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrix1.data[i][j] = value;
            matrix2.data[i][j] = value * 2;
            value++;
        }
    }

    // Calculate the resultant matrix and print it using display method
    Matrix resultMatrix = matrix1 + matrix2;
    resultMatrix.display();

    return 0;
}