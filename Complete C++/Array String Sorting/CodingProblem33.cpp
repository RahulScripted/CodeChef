// Kulyash stays in room that has a single bulb and N buttons. The bulb is initially on. The initial states of the buttons are stored in a binary string S of length N — if Si is 0, the i-th button is off, and if Si is 1, the i-th button is on. If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa. Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string R of length N. He asks you to determine the final state of the bulb.






#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int n; 
        cin >> n;

        string s, t;
        cin >> s >> t;

        int lit = 1;
        for(int i = 0; i < n; i++){
            if(s[i] != t[i]) lit = 1 - lit;
        }

        cout << lit << "\n";
    }
}