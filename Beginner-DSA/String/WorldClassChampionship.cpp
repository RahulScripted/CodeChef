// The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both players get 1 point each. The total prize pool of the championship is 100⋅X. At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60⋅X as his prize money, and the loser gets 40⋅X. If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55⋅X, and the loser gets 45⋅X. Given the results of all the 14 games, output the prize money that Carlsen receives. The results are given as a string of length 14 consisting of the characters C, N, and D.

// 1.  C denotes a victory by Carlsen.
// 2.  N denotes a victory by Chef.
// 3.  D denotes a draw.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        int prizeMoney;
        cout<<"Enter the prize money : ";
        cin>>prizeMoney;

        string s;
        cout<<"Enter the string : ";
        cin>>s;

        int winByCarlsen = 0,winByChef = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'C') winByCarlsen++;
            else if(s[i] == 'N') winByChef++;
        }

        if(winByCarlsen > winByChef) cout<<"The prize money that Carlsen receives will be : "<<(60 * prizeMoney)<<endl;

        else if(winByCarlsen == winByChef) cout<<"The prize money that Carlsen receives will be : "<<(55 * prizeMoney)<<endl;

        else cout<<"The prize money that Carlsen receives will be : "<<(40 * prizeMoney)<<endl;
    }
}