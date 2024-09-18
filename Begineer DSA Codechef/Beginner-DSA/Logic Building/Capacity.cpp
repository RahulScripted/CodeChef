// You have N cars that can seat 5 people each and M cars that can seat 7 people each. Determine the maximum number of people that can travel together in these cars.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int N, M;
        cin >> N >> M;
        int five_seat_capacity = 5 * N;
        int seven_seat_capacity = 7 * M;
        cout << five_seat_capacity + seven_seat_capacity << endl;
    }
    return 0;
}