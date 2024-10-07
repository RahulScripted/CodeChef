// Chef and Chefina are competing against each other in a programming contest. They were both able to solve all the problems in the contest, so the winner between them must be decided by time penalty. Chef solved all the problems in X minutes and made P wrong submissions, while Chefina solved all the problems in Y minutes and made Q wrong submissions. Who won the competition (or was it a draw)?





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int x, y, p, q;
        cin >> x >> y >> p >> q;

        int k = (p * 10) + x;
        int n = (q * 10) + y;

        if(k < n) cout << "Chef\n";
        else if(k > n) cout << "Chefina\n";
        else cout << "Draw\n";
    }
}