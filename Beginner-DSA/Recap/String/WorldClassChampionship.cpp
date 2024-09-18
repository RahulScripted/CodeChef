// Given the results of all the 14 games, output the prize money that Carlsen receives. The results are given as a string of length 14 consisting of the characters C, N, and D.

// 1.  C denotes a victory by Carlsen.
// 2.  N denotes a victory by Chef.
// 3.  D denotes a draw.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string S;
        int X;
        cin >> X;
        cin >> S;
        
        int Carlsen = 0, Chef = 0;
        for(int i = 0; i < 14; i++) {
            if(S[i] == 'C') Carlsen += 2; 
            else if(S[i] == 'N')  Chef += 2;
            else {
                Carlsen += 1;
                Chef += 1;
            }
        }
        
        if(Carlsen > Chef) cout << (60 * X) << endl;
        else if(Chef > Carlsen)  cout << (40 * X) << endl;
        else cout << (55 * X) << endl;
    }
}