// There is a 10 x 10 grid with rows numbered 1 to 10 from top to bottom, and columns 1 to 10 from left to right. Each cell is identified by a pair (r,c) which means that the cell is located at row r and column c. If Chef's current location is (a,b), then in one move Chef can go to (c,d) if both of the following are satisfied:

// 1.  a not equal to c

// 2.  b not equal to d

// Determine the minimum number of moves required to go from (sx,sy) to (ex,ey).





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if(a != c && b != d) cout<<1<<endl;
        else cout<<2<<endl;
    }
}