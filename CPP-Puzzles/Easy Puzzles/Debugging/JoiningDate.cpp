// N candidates (numbered from 1 to N) join Chef's firm. The first 5 candidates join on the first day, and then, on every subsequent day, the next 5 candidates join in. Candidate numbered K decided to turn down his offer and thus, Chef adjusts the position by shifting up all the higher numbered candidates. This leads to a change in the joining day of some of the candidates. Help Chef determine the number of candidates who will join on a different day than expected.




#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        int totalGroups;
        if (n % 5 == 0)  totalGroups = n / 5;
        else totalGroups = (n - n % 5) / 5 + 1;

        int previousGroups;

        if (k % 5 == 0) previousGroups = (k / 5) - 1;
        else previousGroups = k / 5;

        if (n == k) cout << 0 << endl;
        else cout << totalGroups - previousGroups - 1 << endl;
    }
}