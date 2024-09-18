// In Chefland, each chicken has X legs and each duck has Y legs. Chef's farm can have exactly one type of bird. Given that the birds on the farm have a total of Z legs:

// 1.  Print CHICKEN, if the farm can have only chickens but not ducks.

// 2.  Print DUCK, if the farm can have only ducks but not chickens.

// 3.  Print ANY, if the farm can have either chickens or ducks.

// 4.  Print NONE, if the farm can have neither chickens nor ducks.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        if(Z % X == 0 && Z % Y == 0) cout<<"ANY"<<endl;
        
        else if(Z % X == 0) cout<<"CHICKEN"<<endl;
        
        else if(Z % Y == 0) cout<<"DUCK"<<endl;
        
        else cout<<"NONE"<<endl;
    }
    return 0;
}