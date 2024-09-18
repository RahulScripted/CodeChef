// There are two problems in a contest. Problem A is worth 500 points at the start of the contest. Problem B is worth 1000 points at the start of the contest. Once the contest starts, after each minute:

// 1.  Maximum points of Problem A reduce by 2 points.

// 2.  Maximum points of Problem B reduce by 4 points.

// It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly. Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.





#include <iostream>
using namespace std;

int main() {
    int X, Y, T;
    cin >> T;
    while (T--){
        cin >> X >> Y;
        int A = 500 - (X * 2) + 1000 - ((X + Y) * 4);
        int B = 1000 - (Y * 4) + 500 - ((X + Y) * 2);

        cout << max(A, B) << endl;
    }
    return 0;
}