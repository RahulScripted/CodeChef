// There is an ATM machine. Initially, it contains a total of K units of money. N people (numbered 1 through N) want to withdraw money, for each valid i, the i-th person wants to withdraw Ai units of money. The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else. For each person, determine whether they will get the required amount of money or not.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 1, j = 0, n, k;
    cin >> t;
    
    for (i; i <= t; i++) {
        cin >> n;
        cin >> k;
        int A[n];
        
        for (j=0; j < n; j++) { 
            cin >> A[j];
            if (k >= A[j]) {
                cout << 1;
                k = k - A[j];
            } 
            else cout << 0;
        }
        cout << endl;
    }
}