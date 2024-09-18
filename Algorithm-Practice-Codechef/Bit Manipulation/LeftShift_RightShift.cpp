// Input three integers N, L, and, R from user. First, right-shift N by R positions, and then left-shift it by L positions. Print the final result.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l,r;

    // cout<<"Enter the number : ";
    cin>>n;

    // cout<<"Enter the no. of right shift operation : ";
    cin>>l;
    
    // cout<<"Enter the no. of right shift operation : ";
    cin>>r;

    n = n >> r;
    n = n << l;
    
    cout<<"Final result : "<<n;
}