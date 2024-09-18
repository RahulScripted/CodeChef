// Hackerman wants to know who is the better player between Bob and Alice with the help of a game. The game proceeds as follows:

// 1.  First, Alice throws a die and gets the number A
// 2.  Then, Bob throws a die and gets the number B

// Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise. Given A and B, determine who wins the game.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int ValueOfA,ValueOfB;
        cout<<"Enter the value of A : ";
        cin>>ValueOfA;

        cout<<"Enter the value of B : ";
        cin>>ValueOfB;

        bool flag = true;
        for(int i = 2;i < (ValueOfA + ValueOfB);i++){
            if((ValueOfA + ValueOfB) % i == 0){
                flag = false;
                break;
            }
        }

        if(flag) cout<<"Alice win the game"<<endl;
        else cout<<"Bob wins the game"<<endl;
    }
}