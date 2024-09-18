// check the abs function in a bit more detail



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int A, B;
        cin >> A >> B;
        cout << A - B << " " << B - A << " " << abs(A - B) << " " << abs(B - A) << endl;
    }
    return 0;
}