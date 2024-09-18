// The code given in the IDE is incorrect - Try and debug this program!!! In the current semester, you have taken X RTP courses, Y Audit courses and Z Non-RTP courses. The credit distribution for the courses are:

// 1.  4 credits for clearing each RTP course, 
// 2.  2 credits for clearing each Audit course, 
// 3.  0 credits for clearing a Non-RTP course.

// Assuming that you cleared all your courses, report the number of credits you obtain this semester.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int Total_Credits = 4 * X + 2 * Y + 0 * Z;
        cout << Total_Credits << endl;
    }
    return 0;
}