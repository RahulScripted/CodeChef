// N candidates (numbered from 1 to N) join Chef's firm. The first 5 candidates join on the first day, and then, on every subsequent day, the next 5 candidates join in.Candidate numbered K (K ≤ N) decided to turn down his offer and thus, Chef adjusts the position by shifting up all the higher numbered candidates. This leads to a change in the joining day of some of the candidates. Help Chef determine the number of candidates who will join on a different day than expected.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, K;
        cin >> N >> K;

        int changed_count = 0;
        for (int i = K + 1; i <= N; ++i) {
            int original_day = (i - 1) / 5 + 1;
            int new_day = (i - 2) / 5 + 1; 
            if (original_day != new_day) {
                ++changed_count;
            }
        }

        cout << changed_count << endl;
    }
}