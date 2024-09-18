// You will attend tuitions for X weeks, and the cost of tuition per week is Y dollars. You need to compute and output your total tuition fees.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y, tuition;
        cin >> X >> Y;
        tuition = (X * Y);
        cout << tuition << endl;
    }
    return 0;
}