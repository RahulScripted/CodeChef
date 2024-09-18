// Chef has 2 numbers A and B (A < B). Chef will perform some operations on A. In the ith operation:

// 1.  Chef will add 1 to A if i is odd.
// 2.  Chef will add 2 to A if i is even.

// Chef can stop at any instant. Can Chef make A equal to B?





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;

        int diff = B - A;
        if(diff % 3 == 0 || diff % 3 == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}