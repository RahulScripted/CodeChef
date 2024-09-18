// Chef has an array A containing N integers. The integers of the array can be positive, negative, or even zero. Chef allows you to choose at most K elements of the array and multiply them by -1. Find the maximum sum of a subsequence you can obtain if you choose the elements of the subsequence optimally.




#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr, arr + n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0 && k) {
                arr[i] *= -1;
                k--;
                sum += arr[i];
            }
            else if (arr[i] > 0) sum += arr[i];
        }
        cout << sum << endl;
    }
}