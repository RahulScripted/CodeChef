// Some useful math functions




#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double X = 53.56;
    double Y = 3;
    int A = 45;
    int B = 20;
    
    cout << abs(A - B) << "\n";
    cout << A % B << "\n";
    cout << ceil(X) << "\n";
    cout << floor(X) << "\n";
    cout << setprecision(10) << pow(X,Y) << "\n";
}