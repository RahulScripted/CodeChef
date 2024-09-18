// Chef has an array A having N elements. Chef wants to make all the elements of the array equal by repeating the following move. Choose any integer K between 1 and N (inclusive). Then choose K distinct indices i1,i2,.....ik, and increase the values of Ai1,Ai2,......Aik. Find the minimum number of moves required to make all the elements of the array equal.




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int values[n];
        for (int i = 0; i < n; i++) cin >> values[i];

        int max = values[0];
        int min = values[0];

        for (int i = 1; i < n; i++) {
            if (values[i] > max) max = values[i];
            if (values[i] < min) min = values[i];
        }

        cout << (max - min) << endl;
    }
}