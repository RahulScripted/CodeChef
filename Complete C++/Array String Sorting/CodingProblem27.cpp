// Alice and Bob are playing a game of Blobby Volley. In this game, in each turn, one player is the server and the other player is the receiver. Initially, Alice is the server, and Bob is the receiver. If the server wins the point in this turn, their score increases by 1, and they remain as the server for the next turn. But if the receiver wins the point in this turn, their score does not increase. But they become the server in the next turn. In other words, your score increases only when you win a point when you are the server. They start with a score of 0 each, and play N turns. The winner of each of those hands is given to you as a string consisting of 'A's and 'B's. 'A' denoting that Alice won that point, and 'B' denoting that Bob won that point. Your job is the find the score of both of them after the N turns.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; 
        cin >> n;

        string s; 
        cin >> s;

        char server = 'A';
        int cnt[2] = {0};

        for(int i = 0; i < n; i++){
            if(s[i] == server) cnt[server - 'A']++;
            else server = s[i];
        }

        cout << cnt[0] << " " << cnt[1] << "\n";
    }
}