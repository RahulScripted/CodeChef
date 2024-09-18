// Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget. He had Rs. Z at the start of the trip and has already spent Rs. Y on the trip. There are three kinds of water sports one can enjoy, with prices Rs. A, B, and C. He wants to try each sport at least once. If he can try all of them at least once output YES, otherwise output NO.




#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;

        int moneyLeft = (z - y);
        int costOfWaterParks = (a + b + c);

        if (moneyLeft >= costOfWaterParks) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}