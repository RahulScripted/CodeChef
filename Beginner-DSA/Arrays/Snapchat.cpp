// The most popular feature on snapchat is Snapchat Streak. A streak is maintained between two people if both of them send at least one snap to each other daily.If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 0. Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for N consecutive days. On the ith day, Chef sent Ai snaps to Chefina while Chefina sent Bi snaps to Chef. Find the maximum streak count they achieved in those N days.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfDays;
        cout<<"Enter the no. of days : ";
        cin>>noOfDays;

        int chef[noOfDays],chefina[noOfDays];
        for(int i = 0;i < noOfDays;i++){
            cout<<"Enter the distance covered by Chef on "<<(i + 1)<<"th day : ";
            cin>>chef[i];
        } 

        for(int i = 0;i < noOfDays;i++){
            cout<<"Enter the distance covered by Chefina on "<<(i + 1)<<"th day : ";
            cin>>chefina[i];
        }

        int count = 0,maximum = 0;
        for(int i = 0;i < noOfDays;i++){
            if(chef[i] == 0 || chefina[i] == 0) count = 0;
            else count++;
            maximum = max(maximum,count);
        }

        cout<<"The maximum streak count they achieved in those "<<noOfDays<<" days will be : "<<maximum<<endl;
    }
} 