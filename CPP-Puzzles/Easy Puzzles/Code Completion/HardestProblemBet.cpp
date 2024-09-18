// There are 3 problems in a contest namely A,B,C respectively. Alice bets Bob that problem C is the hardest while Bob says that problem B will be the hardest. You are given three integers Sa,Sb,Sc which denotes the number of successful submissions of the problems A,B,C respectively. It is guaranteed that each problem has a different number of submissions. Determine who wins the bet.

// 1.  If Alice wins the bet (i.e. problem C is the hardest), then output Alice.

// 2.  If Bob wins the bet (i.e. problem B is the hardest), then output Bob.

// 3.  If no one wins the bet (i.e. problem A is the hardest), then output Draw.





#include <iostream>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int minimum = min(a, min(b, c));

    if (minimum != b && minimum != c) cout << "Draw" << endl;
    else if (minimum == b) cout << "Bob" << endl;
    else cout << "Alice" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}