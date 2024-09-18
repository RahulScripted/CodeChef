// Create an integer array num which has the integers - 10, 20, 30, 40, 50, 60, 70, 80. All the elements of the given array in separate lines. Use the for each loop syntax defined above.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    for(int i : num) {
        cout << i << endl;
    }
} 