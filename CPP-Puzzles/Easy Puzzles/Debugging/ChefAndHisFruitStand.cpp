// Chef has closed his restaurant and decided to run a fruit stand instead. His signature dish is a fruit chaat consisting of 2 bananas and 1 apple. He currently has X bananas and Y apples. How many chaats can he make with the fruits he currently has?




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int mini = min((x / 2), y);
        cout << mini << endl;
    }
    return 0;
}