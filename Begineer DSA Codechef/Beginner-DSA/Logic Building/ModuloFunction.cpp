// The modulo - % function is helpful whenever we want to check the divisibility of 2 numbers.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int A, B;
        cin >> A >> B;
        cout << A / B << " " << A % B << endl;
    }
    return 0;
}