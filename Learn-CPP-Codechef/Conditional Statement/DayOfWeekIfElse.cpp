// Write a program using nested If/Else statements which does the following

// 1.  Declare a variable day

// 2.  Take an integer input in this variable

// 3.  Output the day of the week corresponding to that number. For example, if day is 1 print "Monday", else if day is 2 print "Tuesday, similarly if day is 7 print "Sunday".





#include <bits/stdc++.h>
using namespace std;

int main() {
    int day;
    cin >> day;
    if (day == 1) cout << "Monday" << endl;
    else if (day == 2) cout << "Tuesday" << endl;
    else if (day == 3) cout << "Wednesday" << endl;
    else if (day == 4) cout << "Thursday" << endl;
    else if (day == 5) cout << "Friday" << endl;
    else if (day == 6) cout << "Saturday" << endl;
    else cout << "Sunday" << endl;
}