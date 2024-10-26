// There are n chocolates, and you are given an array of n numbers where the i-th number Ai is the flavour type of the i-th chocolate. Sebrina wants to eat as many different types of chocolates as possible, but she also has to save at least x number of chocolates for her little brother. Find the maximum possible number of distinct flavour types Sebrina can have.





#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        map < ll, int > mp;
        for (int i = 0; i < n; i++) mp[a[i]]++;
        
        int y = n - x;
        if (mp.size() >= y) cout << y << endl;
        else cout << mp.size() << endl;
    }
}