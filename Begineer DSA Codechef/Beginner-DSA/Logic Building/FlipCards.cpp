// How do we find the minimum number of cards to be flipped?

// 1.  One option is to flip X cards

// 2.  The other option is to flip N - X cards

// 3.  We need to find the minimum of the above





#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 10;
    int X = 4;
    int option1 = X;
    int option2 = N - X;
    cout << min(option1, option2) << endl;

    N = 10;
    X = 6;
    option1 = X;
    option2 = N - X;
    cout << min(option1, option2) << endl;
}