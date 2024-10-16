// Andrew likes meatballs very much. He has N plates of meatballs, here the ith plate contains Pi meatballs. You need to find the minimal number of plates Andrew needs to take to his trip to Las Vegas, if he wants to eat there at least M meatballs. Note that each plate is already packed, i.e. he cannot change the amount of meatballs on any plate.





#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;

    for(int i = 1; i <= t; i++) {
        int N;
        long long M;
        cin >> N >> M;

        long long A[N];
        for(int j = 0; j < N; j++) cin >> A[j];

        sort(A, A + N);
        int index = -1;
        long long sum = 0;

        for(int j = N - 1; j >= 0; j--) {
            sum += A[j];
            if(sum >= M) {
                index = j;
                break;
            }
        }

        if(index == -1) cout << -1 << "\n";
        else cout << N - index << "\n";
    }
    return 0;
}