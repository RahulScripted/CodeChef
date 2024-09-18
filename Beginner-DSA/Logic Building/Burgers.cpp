// Chef has A patties and B buns. To make 1 burger, Chef needs 1 patty and 1 bun. Find the maximum number of burgers that Chef can make.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A, B;
        cin >> A >> B;
        int Burgers;
        Burgers = min(A,B);
        cout << Burgers << endl;
    }
    return 0;
}