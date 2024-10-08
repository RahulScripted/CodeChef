// Chef has 2 numbers A and B (A < B). Chef will perform some operations on A. In the ith operation: Chef will add 1 to A if i is odd. Chef will add 2 to A if i is even. Chef can stop at any instant. Can Chef make A equal to B?




#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int A, B;
        cin >> A >> B;

        int diff = B - A;
        if ((B - A) % 3 == 0) cout << "Yes\n";
        else if ((B - A) % 3 == 1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}