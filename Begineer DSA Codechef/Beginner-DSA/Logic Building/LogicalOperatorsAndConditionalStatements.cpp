// You are given 3 integers N, A and B. You need to compute and output the following for each test case

// 1.  If N is divisible by both A and B - then output 'N is divisible by A and B'

// 2.  Else if N is divisible by A and not B - then output 'N is divisible by only A'

// 3.  Else if N is divisible by B and not A - then output 'N is divisible by only B'

// 4.  Else if N is divisible by neither A nor B - then output 'N is divisible by neither A nor B'





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int N, A, B;
        cin >> N >> A >> B;

        if (N % A == 0 && N % B == 0) cout << "N is divisible by A and B" << endl;

        else if (N % A == 0) cout << "N is divisible by only A" << endl;
        
        else if (N % B == 0) cout << "N is divisible by only B" << endl;
        
        else if (N % A != 0 && N % B != 0) cout << "N is divisible by neither A nor B" << endl;
    }
    return 0;
}