// From a hidden array A of length N, Stack constructs an array B of length N such that: For all i (1 ≤ i ≤ N), Bi = max(A1,A2,.....,Ai) or Bi = min(A1,A2,.......,Ai. For the given array B of length N, Stack wants you to check whether a possible array A exists or not.




#include <bits/stdc++.h>
using namespace std;

string MaxOrMin(vector < int > v, int n) {
    if (n == 1) return "YES";
    int flag = 1;

    int max = v[0];
    int min = v[0];
    
    for (int i = 1; i < n; i++) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
        if (max != v[i] && min != v[i]) {
            flag = 0;
            break;
        }
    }
    if (flag) return "Yes";
    else return "No";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        cout << MaxOrMin(v, n) << "\n";
    }
    return 0;
}