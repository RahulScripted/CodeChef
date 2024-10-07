// Ash is trying to get visa to Chefland. For the visa to be approved, he needs to satisfy the following three criteria: Solve at least x1 problems on Codechef. Have at least y1 current rating on Codechef. Make his last submission at most z1 months ago. You are given the number of problems solved by Chef (x2), his current rating (y2) and the information that he made his last submission z2 months ago. Determine whether he will get the visa.




#include<iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        if(x2 < x1) cout << "NO\n";
        else {
            if(y2 < y1) cout << "NO\n";
            else {
                if(z2 > z1) cout << "NO\n";
                else cout << "YES\n";
            }
        }
    }
}