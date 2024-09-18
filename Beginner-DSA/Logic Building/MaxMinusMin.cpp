// Given 3 integers - A, B and C - you need to find the difference between the highest and the lowest of the given 3 integers.



#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A, B, C;
        cin >> A >> B >> C;

        int maximum = max(A, max(B, C));
        int minimum = min(A, min(B, C));
        
        int D = maximum - minimum;
        cout<<D<<endl;
    }
    return 0;
}