// You have N balls and K boxes. You want to divide the N balls into K boxes such that: Each box contains ≥ 1 balls. No two boxes contain the same number of balls.Determine if it is possible to do so.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfBalls,noOfBoxes;

        cout<<"Enter the no. of balls : ";
        cin>>noOfBalls;

        cout<<"Enter the no. of boxes : ";
        cin>>noOfBoxes;

        noOfBoxes = ((noOfBoxes * (noOfBoxes + 1)) / 2);

        if(noOfBalls >= noOfBoxes) cout<<"It is possible to do so"<<endl;

        else cout<<"It is not possible to do so"<<endl;
    }
}