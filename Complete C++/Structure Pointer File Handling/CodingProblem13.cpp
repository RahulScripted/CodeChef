// Ved is a salesman. He needs to earn at least W rupees in N days for his livelihood. However, on a given day i(1 ≤ i ≤ N), he can only earn Ai rupees by working on that day. Ved, being a lazy salesman, wants to take as many holidays as possible. It is known that on a holiday, Ved does not work and thus does not earn anything. Help maximize the number of days on which Ved can take a holiday.






#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,w;
        cin >> n >> w;
        int a[n];

        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a + n, greater<int>());
        
        int sum=0; int x=0;
        for (int i = 0; i < n; i++) {
            sum = sum + a[i];
            x++;
            if(sum >= w) {
                cout << abs(n - x) << "\n";
                break;
            }
        }
    }

    return 0;
}