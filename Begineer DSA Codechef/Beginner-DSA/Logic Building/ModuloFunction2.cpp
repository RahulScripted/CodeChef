// Chef has recently started playing chess. He completes a game of chess in 30 minutes. Chef has a total of N minutes of available time

// 1.  He will utilize the maximum possible time to play
// 2.  He will not plan incomplete games - if there is insufficient time remaining to play a game, he will not play the game

// How many complete games with Chef be able to play and how much spare time will remain?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        int total_games = N / 30;
        int remaining_time = N % 30;
        cout << total_games << " " << remaining_time << endl;
    }
    return 0;
}