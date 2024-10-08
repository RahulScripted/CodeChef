// Chef has taken his first dose of vaccine D days ago. He may take the second dose no less than L days and no more than R days since his first dose. Determine if Chef is too early, too late, or in the correct range for taking his second dose.




#include <iostream>
using namespace std;

int main() {
    int t, d, l, r;
    cin>>t;

    for(int i = 1; i <= t; i++) {
        cin >> l >> d >> r;
        if(l >= d && l <= r) cout << "Take second dose now\n";
        else if(l < d) cout << "Too Early\n";
        else cout << "Too Late\n";
    }
    return 0;
}