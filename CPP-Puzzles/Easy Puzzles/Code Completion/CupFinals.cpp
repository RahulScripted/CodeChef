// It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D. Given that the skills of the teams competing in the final are X and Y respectively, determine whether Chef will find the game interesting or not.




#include <iostream>
using namespace std;

int main() {
    int n, x, y, d;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> d;
        if (y > x) swap(x,y);
        if (x - y <= d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}