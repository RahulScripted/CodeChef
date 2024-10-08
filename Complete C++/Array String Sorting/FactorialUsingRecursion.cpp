// Factorial using recursion




#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int n; 
    cin >> n;
    if(n < 0) cout << "Factorial does not exist for negative numbers";
    else cout << factorial(n) << "\n";
}