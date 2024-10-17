// There are 20 officers in Chefland who can link the PAN to Aadhar.N applications were received for linking PAN. However, due to an internal conflict, each officer intends to process exactly the same number of applications. Determine the minimum number of applications that would remain unprocessed.





#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        string s; 
        cin >> s;

        int sum = 0;
        for(int i = 0; i < s.size(); i++) sum = (sum * 10 + (s[i] - '0')) % 20;
        cout << sum << "\n";
    }
}