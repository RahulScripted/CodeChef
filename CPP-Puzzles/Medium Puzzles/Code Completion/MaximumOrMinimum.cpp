// Alice and Bob are ready to play a new game. Both the players take alternate turns. Alice starts first. There are N binary numbers written on a blackboard. Alice, in her turn, erases any 2 numbers from the blackboard and writes the bitwise OR of those 2 numbers on the blackboard. Bob, in his turn, erases any 2 numbers from the blackboard and writes the bitwise AND of those 2 numbers on the blackboard.Note that, after each move, the count of numbers written on the blackboard reduces by 1. Both players play until a single number remains on the blackboard. Alice wants to maximize the remaining number while Bob wants to minimize the remaining number. Find the remaining number if both the players play optimally.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int noOfZero = 0, NoOfOne = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) noOfZero++;
            else NoOfOne++;
        }

        if (noOfZero <= NoOfOne) cout << 1 << endl;
        else cout << 0 << endl;
    }
}