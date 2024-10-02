// Write a program which does the following: Find the area of a square of side 14cm. Also, find the cost of painting the square if the paint costs is $7 / cm2.





#include <iostream>
using namespace std;

int main() {
    int s = 14;
    int area = s * s;
    int cost = area * 7;
    cout << area << endl;
    cout << cost; 
    cout << "$";
}