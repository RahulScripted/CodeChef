// There are a total of N players who are competing in the Squid Game, numbered from 1 to N.

// 1.  When the ith player gets eliminated from the game, Ai amount of money is added to the prize pool.

// 2.   The game is played until N - 1 players get eliminated, and the only player left is declared as the winner.

// 3.  The winner gets all the money present in the prize pool.


// You are given an array A consisting of N elements, where Ai denotes the prize money added to the prize pool when the ith player gets eliminated from the game. Find the maximum prize that the winner can get, given that you can choose any player to be the winner.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    
	    int A[N];
	    for(int i=0; i < N; i++) cin >> A[i];
	    
	    int mini = A[0];
	    int sum = A[0];
	    for(int i=1; i < N; i++){
	        if(A[i] < mini) mini = A[i];
	        sum += A[i];
	    }
	    
	    cout<<sum - mini<<endl;
	}
}