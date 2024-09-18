// You are given a rectangular grid with N rows and M columns. A number Ai,j is written in the cell belonging to the ith row and the jth column. Ai,j =1, for all 1 ≤ i ≤ N and 1 ≤ j ≤ M, except for i = N and j = M. AN,M = 0. Find the number of sub-rectangular grids which contain only 1s.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        
        cout<<((n * (n + 1) / 2) * (m * (m + 1) / 2)) - (n * m)<<endl;
    }
}