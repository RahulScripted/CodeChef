// He has N apples and M oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that:

// 1.  Every contestant gets an equal number of apples
// 2.  Every contestant gets an equal number of oranges.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n,m;
        cin >> n >> m;
        
        int gcd = __gcd(n,m);
        cout<<gcd<<endl;
    }
    return 0;
}