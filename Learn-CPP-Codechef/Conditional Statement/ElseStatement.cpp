// Create integer variables r and k - the weight of friends Ram and Karan. Take input in r and then k. Compute and output the following to the console

// 1.  "Ram is heavier than Karan" if r is greater than k

// 2.  "Karan is heavier than Ram" if r is lesser than k

// 3.  "Ram & Karan have the same weight!" for any remaining conditions





#include <bits/stdc++.h>
using namespace std;

int main() {

    int r;
    int k;
    cin >> r;
    cin >> k;
    if(r > k) cout << "Ram is heavier than Karan." << endl;
    else if (r < k) cout << "Karan is heavier than Ram" << endl;
    else cout << "Ram & Karan have the same weight!" << endl;
}