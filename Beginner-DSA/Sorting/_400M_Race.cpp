// Alice, Bob, and Charlie participated in a 400-metre race. The time taken by Alice, Bob, and Charlie to complete the race was X,Y, and Z seconds respectively. Note that X,Y, and Z are distinct. Determine the person having the highest average speed in the race.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int alice,bob,charlie;

        cout<<"Enter the time taken by Alice : ";
        cin>>alice;

        cout<<"Enter the time taken by Bob : ";
        cin>>bob;

        cout<<"Enter the time taken by Charlie : ";
        cin>>charlie;

        float speedOfAlice = (400.0 / alice);
        float speedOfBob = (400.0 / bob);
        float speedOfCharlie = (400.0 / charlie);
        
        if(speedOfAlice > speedOfBob && speedOfAlice > speedOfCharlie) cout<<"Highest average speed in the race : Alice"<<endl;
        else{
            if(speedOfBob > speedOfCharlie) cout<<"Highest average speed in the race : Bob"<<endl;
            else cout<<"Highest average speed in the race : Charlie"<<endl;
        }
    }
}