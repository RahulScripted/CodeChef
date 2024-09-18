// Suppose Chef is stuck on an island and currently he has x units of food supply and y units of water supply in total that he could collect from the island. He needs xr units of food supply and yr units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. Assuming it takes exactly D days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, x1, y1, d;
        cin >> x >> y >> x1 >> y1 >> d;

        float food = (x / float(x1)), water = (y / float(y1));

        if (min(food, water) >= d) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}