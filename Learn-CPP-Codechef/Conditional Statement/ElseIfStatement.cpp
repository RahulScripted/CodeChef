// Create integer variables r and b - the marks scored by Bob and Rob. Take input in r and then b. Compute and output the following to the console. "Rob Scored higher marks than Bob" if r is greater than b. "Bob & Rob both scored the same" if both b and r are equal.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int r;
    int b;
    cin >> r >> b;
    if (r > b) cout << "Rob Scored higher marks than Bob" << endl;
    else if (r == b)  cout << "Bob & Rob both scored the same" << endl;
}