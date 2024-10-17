// you are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length N, such that both arrays consist of distinct elements.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        n *= 2;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        bool f = 1;

        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = 0; j < n; j++) {
                if(a[j] == a[i]) count++;
            }

            if(count > 2) f = 0;
        }

        if(f) cout << "Yes\n";
        else cout << "No\n";
    }
}