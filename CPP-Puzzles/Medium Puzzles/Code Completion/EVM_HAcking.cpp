// There are three cities and thus three EVMs. An insider told Chef that his party got A,B,C votes respectively in these three cities according to the EVMs. Also, the total number of votes cast are P,Q,R respectively for the three cities. Chef, being the party leader, can hack at most one EVM so that his party wins. On hacking a particular EVM all the votes cast in that EVM are counted in favor of Chef's party. A party must secure strictly more than half of the total number of votes cast in order to be considered the winner. Can Chef achieve his objective of winning by hacking at most one EVM?




#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;

        float halfTotalVotes = (p + q + r) / 2.0;

        int votesIfHackA = p + b + c;
        int votesIfHackB = a + q + c;
        int votesIfHackC = a + b + r;

        if (votesIfHackA > halfTotalVotes || votesIfHackB > halfTotalVotes || votesIfHackC > halfTotalVotes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}