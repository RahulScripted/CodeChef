// You are given T test-cases , each testcase consists of 3 numbers , P,X,Y,Z. You have a best friend named Rahul. Z is 1 if you will meet Rahul and 0 otherwise. You initially has an Emotional Proximity of P, which increases by Y% if you meet Rahul and decreases by X% otherwise. You have to print the final Emotional Proximity.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        double p;
        cin >> p >> x >> y >> z;

        if (z == 1) p = p + (p * y / 100);
        else p = p - (p * x / 100);
        cout << fixed << setprecision(10) << p << endl;
    }
}