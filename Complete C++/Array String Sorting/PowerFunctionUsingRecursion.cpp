// Given 2 integers x and y - write a recursive function to calculate the result x ^ y.




#include <iostream>
using namespace std;

int power(int x, int n) {
    
    if (n == 0) return 1; 
    else return x * power(x, n - 1);
}

int main() {
    int x;
    int y;
    cin >> x;
    cin >> y;
    cout << power(x, y) << "\n";
}