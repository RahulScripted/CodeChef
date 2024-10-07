// Chef is currently standing at stair 0 and he wants to reach stair numbered X. Chef can climb either Y steps or 1 step in one move. Find the minimum number of moves required by him to reach exactly the stair numbered X.




#include<iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int x, y; 
        cin >> x >> y;
        
        int y_steps = x / y;
        int one_steps = x % y;

        cout << y_steps + one_steps << "\n";
    }
}