// There were initially X million people in a town, out of which Y million people left the town and Z million people immigrated to this town. Determine the final population of the town in millions.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int total_population = X - Y;
        total_population = total_population + Z;
        cout << total_population << endl;
    }
    return 0;
}