// Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook. Chef's restaurant has X stoves and only 1 packet can be cooked in a single stove at any minute. How many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?


#include <bits/stdc++.h>
using namespace std;
int main() {
    int noOfStoves,noOfMinutes;
    // cout<<"Enter the no. of stoves : ";
    cin>>noOfStoves;

    // cout<<"Enter the no. of required minutes : ";
    cin>>noOfMinutes;

    cout/* <<"No. of minutes required : " */<<(noOfMinutes * noOfStoves)<<endl;
}


// Output: 7
//         8
//         56