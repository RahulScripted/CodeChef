// Print 2D arrays




#include <iostream>
using namespace std;

int main() {
    int matrix[3][4] = {
        {1, 2},
        {5, 6, 7},
        {9}
    };

    cout << "Partial Initialized 2D Array:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) cout << matrix[i][j] << " ";
        cout << "\n";
    }
}