// There are two problems in a contest.

// 1.  Problem A is worth 500 points at the start of the contest.

// 2.  Problem B is worth 1000 points at the start of the contest.

// Once the contest starts, after each minute:

// 1.  Maximum points of Problem A reduce by 2 points.

// 2.  Maximum points of Problem B reduce by 4 points.

// It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly. Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        int maxi1 = (500 - (x * 2)) + (1000 - ((x + y) * 4));
        int maxi2 = (500 - (y * 4)) + (1000 - ((x + y) * 2));
        
        cout<<max(maxi1,maxi2)<<endl;
    }
}