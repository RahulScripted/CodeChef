// Chef decided to redecorate his house, and now needs to decide between two different styles of interior design.

// 1.  Style 1: tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.

// 2.  Style 2: tiling the floor will cost X2 rupees and painting the walls will cost Y2 rupees.

// Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?






#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        cout<<min((X1 + Y1),(X2 + Y2))<<endl;
    }
    return 0;
}