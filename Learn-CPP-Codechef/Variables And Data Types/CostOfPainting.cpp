// Write a program which does the following:

// 1.  Find the area of a square of side 14cm.

// 2.  Also, find the cost of painting the square if the paint costs is 7$ cm/sq.

// 3.  Output area and cost to the console on separate lines.




#include <iostream>
using namespace std;

int main() {
    int s = 14;
    int area = s * s;
    int cost = area * 7;
    
    cout << area << endl;
    cout << cost << "$";
}