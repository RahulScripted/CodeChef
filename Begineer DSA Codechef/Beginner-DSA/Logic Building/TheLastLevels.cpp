// Chef is playing a video game, and is getting close to the end. He decides to finish the rest of the game in a single session. There are X levels remaining in the game, and each level takes Chef Y minutes to complete. To protect against eye strain, Chef also decides that every time he completes 3 levels, he will take a Z minute break from playing. Note that there is no need to take this break if the game has been completed. How much time (in minutes) will it take Chef to complete the game?





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x <= 3) cout<<(x * y)<<endl;
        else if(x % 3 != 0) cout<<(x * y) + ((x / 3) * z)<<endl;
        else cout<<(x * y) + ((x / 3) * z) - z<<endl;
    }
}