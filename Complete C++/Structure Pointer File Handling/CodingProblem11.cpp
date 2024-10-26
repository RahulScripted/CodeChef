// Chef has an array A of length N. In one operation, Chef can choose any two distinct indices i,j (1 ≤ i,j ≤ N,i !=j) and either change Ai to Aj  or change Aj to Ai. Find the minimum number of operations required to make all the elements of the array equal.





#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int freq[1001] = {0};

        int n; 
        cin >> n;

        int mx = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            mx = max(mx, ++freq[x]);
        }

        cout << n - mx << "\n";
    }

    return 0;
}   