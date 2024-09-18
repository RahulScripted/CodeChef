// Given n (n is even), determine the number of black cells in an n x n chessboard.




#include <iostream>
using namespace std;

int square(int t) {
    return t * t;
}

int half(int i) {
    return i / 2;
}

int main() {
    int n;
    cin >> n;
    
    int result1 = square(n);
    int result2 = half(result1);
    
    cout << result2 << endl;   
}