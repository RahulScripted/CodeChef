// An electronics shop sells red and blue lamps. A red lamp costs X rupees and a blue lamp costs Y rupees. Chef is going to buy exactly N lamps from this shop. Find the minimum amount of money Chef needs to pay such that at least K of the lamps bought are red.




#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        
        int minNeed = (k * x); // Minimum red bulbs
        int need = min((n - k) * x,(n - k) * y); // Minimum need bulbs
        
        cout<<(minNeed + need)<<endl;
    }
}