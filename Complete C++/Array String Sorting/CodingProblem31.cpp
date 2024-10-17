// Chef is confused by all the different formats dates can be written in. Here's a simple problem Chef wants you to solve. You are given a date string S. The date follows the Gregorian calendar, the one used in most parts of the world. Identify whether it is of the form DD/MM/YYYY or MM/DD/YYYY, or if it can be of both forms. Here DD denotes the 2-digit day, MM denotes the 2-digit month and YYYY denotes the 4-digit year. It is guaranteed that S is a valid date taking at least one of these forms.





#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        string s; 
        cin >> s;

        int t1 = (s[0] - '0') * 10 + (s[1] - '0');
        int t2 = (s[3] - '0') * 10 + (s[4] - '0');
        
        if(t1 <= 12 && t2 <= 12) cout << "BOTH\n";
        else if(t1 <= 12) cout << "MM/DD/YYYY\n";
        else cout << "DD/MM/YYYY\n";
    }
}