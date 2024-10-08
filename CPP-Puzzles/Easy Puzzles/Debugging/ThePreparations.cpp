// Chef has an exam which will start exactly M minutes from now. However, instead of preparing for his exam, Chef started watching Season-1 of Superchef. Season-1 has N episodes, and the duration of each episode is K minutes. Will Chef be able to finish watching Season-1 strictly before the exam starts?




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int M, N, K;
        cin >> M >> N >> K;

        long long int watchTime = (N * K);
        if (watchTime < M) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}