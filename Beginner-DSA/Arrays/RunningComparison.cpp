// Alice and Bob recently got into running, and decided to compare how much they ran on different days. They each ran for N days — on the ith day, Alice ran Ai meters and Bob ran Bi meters. On each day,

// 1.  Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
// 2.  Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.

// On how many of the N days were both Alice and Bob happy?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of an array : ";
        cin>>length;

        int alice[length],bob[length];
        for(int i = 0;i < length;i++){
            cout<<"Enter the distance covered by Alice on "<<(i + 1)<<"th day : ";
            cin>>alice[i];
        } 
        for(int i = 0;i < length;i++){
            cout<<"Enter the distance covered by Bob on "<<(i + 1)<<"th day : ";
            cin>>bob[i];
        } 

        int bothHappy = 0;
        for(int i = 0;i < length;i++){
            if(alice[i] <= (2 * bob[i]) && bob[i] < ( 2* alice[i])) bothHappy++;
        }

        cout<<"No. of days where both Alice and Bob happy will be : "<<bothHappy<<endl;
    }
}