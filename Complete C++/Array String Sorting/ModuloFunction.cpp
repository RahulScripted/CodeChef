// Chef has recently started playing chess. He completes a game of chess in 30 minutes. Chef has a total of N minutes of available time He will utilise the maximum possible time to play. He will not plan incomplete games - if there is insufficient time remaining to play a game, he will not play the game. How many complete games will Chef be able to play and how much spare time will remain?




#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, N, total_games, remaining_time;
    cin >> t;
    
    while(t--) {
        cin >> N; 
        total_games = N / 30;
        remaining_time = N % 30;
        cout << total_games << " " << remaining_time << "\n";
    }
}