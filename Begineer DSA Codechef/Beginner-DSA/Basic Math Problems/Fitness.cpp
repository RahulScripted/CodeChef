// Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is X km away from his home. If his office is open on 5 days in a week, find the number of kilometers Chef travels through office trips in a week.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int distanceOfOffice;
        cout<<"Enter the distance between his home to his office : ";
        cin>>distanceOfOffice;
        cout<<"The number of kilometers Chef travels through office trips in a week will be : "<<(5 * (2 * distanceOfOffice))<<endl;
    }
}