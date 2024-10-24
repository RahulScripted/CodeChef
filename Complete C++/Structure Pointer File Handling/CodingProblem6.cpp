// You are given N points on a 2-d cartesian plane. You need to find the largest euclidean distance between any two points.




#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

float dist(Point p1, Point p2) {
    float ans = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
    return ans;
}

int main() {
    int n; 
    cin >> n;   

    Point p[n];
    for(int i = 0; i < n; i++) cin >> p[i].x >> p[i].y;

    float ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i - 1; j++) {
            float distance = dist(p[i], p[j]);
            ans = max(ans, distance);
        }
    }

    cout << ans;
}