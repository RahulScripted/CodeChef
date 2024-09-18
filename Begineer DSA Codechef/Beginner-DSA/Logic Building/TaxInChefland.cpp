// In Chefland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 100. Given that total income is X rupees, find out how much money does the Chef take home.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X;
        cin >> X;
        
        if(X > 100) cout<<(X - 10)<<endl;
        else cout<<X<<endl;
    }
}