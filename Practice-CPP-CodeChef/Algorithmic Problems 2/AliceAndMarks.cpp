// Alice has scored X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.


#include <iostream>
using namespace std;
int main() {
    int marksObtainByAlice,marksObtainByBob;
    // cout<<"Enter the marks obtain by Alice : ";
    cin>>marksObtainByAlice;

    // cout<<"Enter the marks obtain by Bob : ";
    cin>>marksObtainByBob;

    if(marksObtainByAlice >= (2 * marksObtainByBob)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}



// Output: 2 1
//         Yes