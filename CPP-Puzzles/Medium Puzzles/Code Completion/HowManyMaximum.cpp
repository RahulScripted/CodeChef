// Given the string S, determine the count of indices (1 ≤ i ≤ N) such that it is possible for Ai to be the maximum element of the array A.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int count = 1;
        for (int i = 0; i < (n - 1); i++) {
            if (str[i] == '1' && str[i + 1] == '0') count++;
        }
        cout << count << endl;
    }
}