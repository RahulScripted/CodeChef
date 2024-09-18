// Chef and Chefina are competing against each other in a programming contest. They were both able to solve all the problems in the contest, so the winner between them must be decided by time penalty. Chef solved all the problems in X minutes and made P wrong submissions, while Chefina solved all the problems in Y minutes and made Q wrong submissions. Who won the competition (or was it a draw)?

// 1.  The base time penalty is the time at which the final problem was solved (so, X for Chef and Y for Chefina)

// 2.  Each wrong submission adds a penalty of 10 minutes

// 3.  The winner is the person with less penalty time. If they both have the same penalty, it is considered a draw.






#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, p, q;
        cin >> x >> y >> p >> q;

        int chefTime = x + (p * 10);
        int chefinaTime = y + (q * 10);

        if (chefTime > chefinaTime) cout << "Chefina" << endl;
        else if (chefTime < chefinaTime) cout << "Chef" << endl;
        else cout << "Draw" << endl;
    }
}