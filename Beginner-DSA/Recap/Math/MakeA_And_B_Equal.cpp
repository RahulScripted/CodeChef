// Chef has two numbers A and B. In one operation, Chef can choose either A or B and multiply it by 2. Determine whether he can make both A and B equal after any number (possibly, zero) of moves.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        
        int minAB = min(A, B);
        int maxAB = max(A, B);
        int flag = 0;

        while (minAB <= maxAB) {
            if (minAB == maxAB){
                flag = 1;
                break;
            }
            else minAB *= 2;
        }

        if (flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}