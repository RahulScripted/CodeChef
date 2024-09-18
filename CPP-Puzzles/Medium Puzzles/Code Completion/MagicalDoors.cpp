// Chef wants to cross a hallway of N doors. These N doors are represented as a string. Each door is initially either open or close, represented by 1 or 0 respectively. Chef is required to go through all the doors one by one in the order that they appear, starting from the leftmost door and moving only rightwards at each step. To make the journey easier, Chef has a magic wand, using which Chef can flip the status of all the doors at once. Determine the minimum number of times Chef has to use this wand to cross the hallway of doors.




#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool flip = false;
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (flip) {
                if (s[i] == '1') {
                    count++;
                    flip = false;
                }
            }
            else {
                if (s[i] == '0') {
                    count++;
                    flip = true;
                }
            }
        }
        cout << count << endl;
    }
}