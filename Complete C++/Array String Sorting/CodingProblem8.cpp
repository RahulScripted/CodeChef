// N candidates (numbered from 1 to N) join Chef's firm. The first 5 candidates join on the first day, and then, on every subsequent day, the next 5 candidates join in. Candidate numbered K (K ≤ N) decided to turn down his offer and thus, Chef adjusts the position by shifting up all the higher numbered candidates. This leads to a change in the joining day of some of the candidates. Help Chef determine the number of candidates who will join on a different day than expected.





#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        cout << ceil(a / 5.0) - ceil(b / 5.0) << "\n";
    }
    return 0;
}