// Chef went to a store and purchased N items, where the cost of each item is X. Find whether the total bill is equivalent to a valid phone number.




#include<iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

   while(t--){
        int n, x; 
        cin >> n >> x;

        int result = n * x;
        int digits = 0;

        while(result > 0){
            digits++;
            result /= 10;
        }

        if(digits == 5) cout << "YES\n";
        else cout << "NO\n";
    }
}