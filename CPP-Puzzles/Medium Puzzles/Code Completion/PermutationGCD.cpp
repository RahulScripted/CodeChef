// Chef wants to find a permutation of {1,2,…,N} which has the given sum equal to X. Please help Chef find one such permutation. In case there is no such permutation, print -1. In case of multiple answers, any of them will be accepted. A permutation of {1,2,…,N} is a sequence of numbers from 1 to N in which each number occurs exactly once.




#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;

        if (x < n) {
            cout << -1 << "\n";
            continue;
        }

        x -= (n - 1);
        cout << x << " ";
        for (int i = 1; i <= n; i++) {
            if (i == x) continue;
            cout << i << " ";
        }
        cout << endl;
    }
}