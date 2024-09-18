// You are given an array A = [A1,A2,…,AN] of length N.You can right rotate it any number of times (possibly, zero). What is the maximum value of A1 + AN you can get?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int maxSum = INT_MIN;
        for (int i = 1; i < n; i++)  maxSum = max(maxSum, arr[i] + arr[i - 1]);
        
        maxSum = max(maxSum, arr[0] + arr[n - 1]);
        cout << maxSum << endl;
    }
    return 0;
}