// There is a problem worth X points and it has 10 test cases. It is known that X is a multiple of 10. It is known that each test case is worth the same number of points. You pass N test cases among them. Determine the score that you will get.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, N;
        cin >> X >> N;
        int points_per_testCase = X / 10;
        int score = points_per_testCase * N;
        cout << score << endl;
    }
    return 0;
}