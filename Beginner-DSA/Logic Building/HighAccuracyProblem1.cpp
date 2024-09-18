// How do we find the number of questions incorrectly solved?

// 1.  If X is divisible by 3, then minimum number of questions incorrect is 0.

// 2.  If (X + 1) is divisible by 3, then minimum number of questions incorrect is 1

// 3.  If (X + 2) is divisible by 3, then minimum number of questions incorrect is 2





#include <bits/stdc++.h>
using namespace std;

int main(){
    int X = 30;
    if (X % 3 == 0) cout << "Number of questions incorrectly solved is 0" << endl;

    else if ((X + 1) % 3 == 0) cout << "Number of questions incorrectly solved is 1" << endl;

    else cout << "Number of questions incorrectly solved is 2" << endl;
    
    X = 34;
    if (X % 3 == 0) cout << "Number of questions incorrectly solved is 0" << endl;

    else if ((X + 1) % 3 == 0) cout << "Number of questions incorrectly solved is 1" << endl;

    else cout << "Number of questions incorrectly solved is 2" << endl;
}