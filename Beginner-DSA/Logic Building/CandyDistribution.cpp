// Chef has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        
        if(n % p != 0) cout<<"No"<<endl;
        else if((n / p) % 2 == 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}