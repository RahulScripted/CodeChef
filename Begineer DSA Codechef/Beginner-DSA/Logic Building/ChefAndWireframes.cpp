// Chef has a rectangular plate of length Ncm and width Mcm. He wants to make a wire-frame around the plate. The wire-frame costs X rupees per cm. Determine the cost Chef needs to incur to buy the wire-frame.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m>>x;
        cout<<((2 * n) + (2 * m)) * x<<endl;
    }
}