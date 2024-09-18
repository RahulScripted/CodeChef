// Chef is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1. Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do so.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int firstVolume,changeVolume;
        cout<<"Enter the volume first : ";
        cin>>firstVolume;
        cout<<"Enter the volume he wants to change : ";
        cin>>changeVolume;
        cout<<"The minimum number of button presses required to do so will be : "<<abs(firstVolume - changeVolume)<<endl;
    }
}