// Chef needs to park her car while she watches a movie. The parking charges at the theater are as follows:

// 1.  Rs. X for the first 1 hour
// 2.  Rs. Y for every extra hour after the first hour


// If Chef parks her car for H hours, what is the total parking charges that she should pay?



#include <bits/stdc++.h>
using namespace std;
int main() {
    int chargeInFirstHour,chargeInExtraHour,parkingTime;
    // cout<<"Enter the charge in first hour : ";
    cin>>chargeInFirstHour;

    // cout<<"Enter the charge in extra hour : ";
    cin>>chargeInExtraHour;

    // cout<<"Enter the total no. of parking hour : ";
    cin>>parkingTime;

    cout /* "The total parking charges that she should pay will be : " */<<(chargeInFirstHour + (chargeInExtraHour * parkingTime));
}


// Output :  10
//            1
//            5
//           14