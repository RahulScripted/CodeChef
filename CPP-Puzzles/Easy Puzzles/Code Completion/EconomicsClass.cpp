// Alice has recently learned in her economics class that the market is said to be in equilibrium when the supply is equal to the demand. Alice has market data for N time points in the form of two integer arrays S and D. Here, Si denotes the supply at the ith point of time and Di denotes the demand at the ith point of time, for each 1 ≤ i ≤ N. Help Alice in finding out the number of time points at which the market was in equilibrium.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int arr1[n];
        for (int i = 0; i < n; i++) cin >> arr1[i];
        
        int arr2[n];
        for (int i = 0; i < n; i++) cin >> arr2[i];
        
        int ans = 0;
        for (int i = 0; i < n; i++){
            if(arr1[i] == arr2[i]) ans++;
        }
        
        cout << ans << endl;
    }
}