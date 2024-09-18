// Chef wants to appear in a competitive exam. To take the exam, there are following requirements:

// 1.  Minimum age limit is X (i.e. Age should be greater than or equal to X).
// 2.  Age should be strictly less than Y.

// Select the ages which are eligible, if X = 10, and Y = 20.



#include <iostream>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
        int minimumAgeLimit,maximumAgeLimit,ageOfChef;

        cout<<"Enter the minimum age limit : ";
        cin>>minimumAgeLimit;

        cout<<"Enter the maximum age limit : ";
        cin>>maximumAgeLimit;

        cout<<"Enter the age of Chef : ";
        cin>>ageOfChef;

        if(ageOfChef >= minimumAgeLimit && ageOfChef < maximumAgeLimit) cout<<"Yes"<<endl;

        else cout<<"No"<<endl;
    }
}


// Output: 5              |
//         21 34 30       |     Yes
//         25 31 31       |     No
//         22 29 25       |     Yes
//         20 40 15       |     No
//         28 29 28       |     Yes