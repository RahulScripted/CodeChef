// Chef wants to impress Chefina by giving her the maximum number of gifts possible. Chef is in a gift shop having N items where the cost of the ith item is equal to Ai. Chef has K amount of money and a 50% off discount coupon that he can use for at most one of the items he buys. If the cost of an item is equal to X, then, after applying the coupon on that item, Chef only has to pay [x / 2] (rounded up to the nearest integer) amount for that item. Help Chef find the maximum number of items he can buy with K amount of money and a 50% discount coupon given that he can use the coupon on at most one item.





#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k; 
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);

        int ans = 0, cur = 0;

        for(int i = 0; i < n; i++) {
            cur = cur + arr[i];
            if(cur > k) {
                cur = cur - arr[i];
                cur = cur + ceil(arr[i] / 2.0);
                if(cur <= k) ans++;
                break;
            }
            ans++;
        }

        cout << ans << "\n";
    }
    
    return 0;
}