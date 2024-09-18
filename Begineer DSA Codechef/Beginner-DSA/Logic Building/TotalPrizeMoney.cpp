// In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

// 1.  Top 10 participants receive rupees X each.

// 2.  Participants with rank 11 to 100 (both inclusive) receive rupees Y each.

// Find the total prize money over all the participants.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y, prize_top10, prize_11to100;
        cin >> X >> Y;
        prize_top10 = 10 * X;
        prize_11to100 = 90 * Y;
        cout << prize_top10 + prize_11to100 << endl;
    }
    return 0;
}