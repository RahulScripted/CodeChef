// Kulyash stays in room that has a single bulb and N buttons. The bulb is initially on. The initial states of the buttons are stored in a binary string S of N — if Si is 0, the i-th button is off, and if Si is 1, the i-th button is on. If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa. Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string R of length N. He asks you to determine the final state of the bulb.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of the string : ";
        cin>>length;

        string switchBoard;
        cout<<"Enter the string of switch : ";
        cin>>switchBoard;

        string finalSate;
        cout<<"Enter the string of final state : ";
        cin>>finalSate;

        int count = 0;
        for(int i = 0;i < length;i++){
            if(switchBoard[i] != finalSate[i]) count++;
        }

        if(count % 2 == 0) cout<<"Final state of the bulb : On"<<endl;
        else cout<<"Final state of the bulb : Off"<<endl;
    }
}