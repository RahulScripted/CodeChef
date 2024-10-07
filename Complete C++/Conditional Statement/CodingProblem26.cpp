// Alice, Bob, and Charlie have X,Y, and Z chocolates respectively. Find whether you can redistribute the chocolates such that: Each person has at least one chocolate. No two people have same number of chocolates. No chocolate is left after redistribution.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if((x + y + z) >= 6) cout << "YES\n";
        else cout << "NO\n";
    }
}