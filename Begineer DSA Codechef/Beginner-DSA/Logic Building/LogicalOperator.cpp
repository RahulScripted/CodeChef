// Let us try an example with multiple conditions which can be clubbed into a single if / else condition using "and" and "or".





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int A, B;
        cin >> A >> B;

        if (A != B && (A % 2 != 0 && B % 2 != 0)) cout << "A and B are different and are odd" << endl;
        
        else if (A != B && (A % 2 == 0 && B % 2 == 0)) cout << "A and B are different and are even" << endl;
        
        else cout << "Doesn't matter" << endl;
    }
    return 0;
}