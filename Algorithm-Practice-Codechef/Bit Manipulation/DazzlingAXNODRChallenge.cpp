// Dazzler has a blank canvas and (N - 1) colours numbered from 2 to N. Let B denote the beauty of the canvas. The beauty of a blank canvas is 1. Dazzler paints the canvas by using all the (N - 1) colours exactly once. On applying the ith colour (2 ≤ i ≤ N):

// 1.  If i is odd, B = B & i.

// 2.  If i is even, B = B ⊕ i. Find the beauty of the canvas after applying all (N - 1) colours.

// Here & and ⊕ denote the bitwise AND and bitwise XOR operations respectively.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        
        if(n % 4 == 2 || n % 4 == 3) cout<<3<<endl;
        else if(n % 4 == 0) cout<<(n + 3)<<endl;
        else cout<<n<<endl;
    }
}