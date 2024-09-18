// Squid Game has become a blockbuster hit and the front-man is now finding it difficult to accommodate all the participants in Squid Game 2.0. So, he decided that he will allow only those participants who could solve the following problem. There are a total of N players who are competing in the Squid Game, numbered from 1 to N. When the ith player gets eliminated from the game, Ai amount of money is added to the prize pool. The game is played until N - 1 players get eliminated, and the only player left is declared as the winner. The winner gets all the money present in the prize pool. You are given an array A consisting of N elements, where Ai denotes the prize money added to the prize pool when the ith player gets eliminated from the game. Find the maximum prize that the winner can get, given that you can choose any player to be the winner.


#include <iostream>
#include <climits>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfArray;
        cout<<"Enter the length : ";
        cin>>lengthOfArray;

        int minimum = INT_MAX,sum = 0;
        int arr[lengthOfArray];
        for(int i = 0;i < lengthOfArray;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            if(minimum > arr[i]) minimum = arr[i];
            sum += arr[i];
        }

        cout<<"The maximum prize that the winner can get will be : "<<(sum - minimum)<<endl;
    }
}