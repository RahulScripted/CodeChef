// Chef and Roma are playing a game. Rules of the game are quite simple. Initially there are N piles of stones on the table. In each turn, a player can choose one pile and remove it from the table. Each player want to maximize the total number of stones removed by him. Chef takes the first turn. Please tell Chef the maximum number of stones he can remove assuming that both players play optimally.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStone;
        cout<<"Enter the no. of items : ";
        cin>>noOfStone;

        vector<int>weightOfStone(noOfStone);
        for(int i = 0;i < noOfStone;i++){
            cout<<"Enter the weight of "<<(i + 1)<<"th rock : ";
            cin>>weightOfStone[i];
        }

        sort(weightOfStone.rbegin(),weightOfStone.rend());
        long long sum = 0;
        for(int i = (noOfStone - 1);i >= 0;i -= 2) sum += weightOfStone[i];

        cout<<"The maximum number of stones he can remove will be : "<<sum<<endl;
    }
}