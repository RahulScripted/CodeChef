// Little Elephant was fond of inventing new games. After a lot of research, Little Elephant came to know that most of the animals in the forest were showing less interest to play the multi-player games. Little Elephant had started to invent single player games, and succeeded in inventing the new single player game named COIN FLIP. In this game the player will use N coins numbered from 1 to N, and all the coins will be facing in "Same direction" (Either Head or Tail), which will be decided by the player before starting of the game. The player needs to play N rounds. In the k-th round the player will flip the face of the all coins whose number is less than or equal to k. That is, the face of coin i will be reversed, from Head to Tail, or, from Tail to Head, for i ≤ k. Elephant needs to guess the total number of coins showing a particular face after playing N rounds. Elephant really becomes quite fond of this game COIN FLIP so Elephant plays G times. Please help the Elephant to find out the answer.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int game;
        // cout<<"Enter the no. of game set are played : ";
        cin>>game;
        while(game--){
            int initialStateOfCoins,numberOfCoins,guessHeadOrTail;

            // cout<<"Enter the initial state of the coins : ";
            cin>>initialStateOfCoins;
            // cout<<"Enter the no. of coins : ";
            cin>>numberOfCoins;
            // cout<<"Guess the value of coins : ";
            cin>>guessHeadOrTail;

            if(numberOfCoins % 2 == 0) cout<<(numberOfCoins / 2)<<endl;

            else if(initialStateOfCoins == guessHeadOrTail) cout<<(numberOfCoins / 2)<<endl;
            
            else cout<<((numberOfCoins + initialStateOfCoins) / 2)<<endl;
        }
    }
}