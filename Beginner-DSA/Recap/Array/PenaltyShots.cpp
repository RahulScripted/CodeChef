// It's the soccer match finals in Chefland and as always it has reached the penalty shootouts. Each team is given 5 shots to make and the team scoring a goal on the maximum number of shots wins the game. If both the teams' scores are equal, then the game is considered a draw and we would have 2 champions. Odd index means penalty taken by team1 and if not then team2. Ai = 1 indicates that it's a goal and Ai = 0 indicates a miss.




// Update your code below to solve the problem


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int A[10];
	    for(int i = 0; i < 10; i++) cin >> A[i];
	    
	    int team1 = 0, team2 = 0;
	    for(int i = 0;i < 10;i++){
	        if(i % 2 == 0 && A[i] == 1) team1++;
	        else if(i % 2 != 0 && A[i] == 1) team2++;
	    }
	    
	    if(team1 > team2) cout<<1<<endl;
	    else if(team1 == team2) cout<<0<<endl;
	    else cout<<2<<endl;
    }
}