// Chef recently solved his first problem on CodeChef. The problem he solved has N test cases. He gets a score for his submission according to the following rules:

// 1.  If Chef's code passes all the N test cases, he gets 100 points.

// 2.  If Chef's code does not pass all the test cases, but passes all the first M(M < N) test cases, he gets K (K < 100) points.

// 3.  If the conditions 1 and 2 are not satisfied, Chef does not get any points (i.e his score remains at 0 points).

// You are given a binary array A1,A2,.....,AN of length N, where Ai = 1 denotes Chef's code passed the ith test case, Ai = 0 denotes otherwise. You are also given the two integers M,K. Can you find how many points does Chef get?





#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector < int > arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        if (count(arr.begin(), arr.end(), 0) == 0) cout << 100 << endl;
        else if (count(arr.begin(), arr.begin() + m, 0) == 0) cout << k << endl;
        else cout << 0 << endl;
    }
}