// After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with shaolin self-defense techniques. The only condition for a woman to be eligible for the special training is that she must be between 10 and 60 years of age, inclusive of both 10 and 60. Given the ages of N women in his village, please help San Te find out how many of them are eligible for the special training.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++) cin >> A[i];

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] >= 10 && A[i] <= 60) count++;
        }
        cout << count << endl;
    }
}