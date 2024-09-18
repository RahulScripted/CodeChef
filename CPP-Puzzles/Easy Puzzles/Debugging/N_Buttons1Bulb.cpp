// Kulyash stays in room that has a single bulb and N buttons. The bulb is initially on. The initial states of the buttons are stored in a binary string S of length N — if Si is 0, the i-th button is off, and if Si is 1, the i-th button is on. If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa. Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string R of length N. He asks you to determine the final state of the bulb.




#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int btn = 1;
        int x;
        cin >> x;

        string bits1;
        cin >> bits1;

        string bits2;
        cin >> bits2;

        int i = 0;
        while (x) {
            if (bits1[i] != bits2[i]) {
                if (btn == 1) btn = 0;
                else if (btn == 0) btn = 1;
            }
            i++;
            x--;
        }

        cout << btn << endl;
    }
    return 0;
}