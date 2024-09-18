// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of X bits per second above which his calculations are prone to errors. If Chef is currently working at Y bits per second, is he prone to errors? If Chef is prone to errors print YES, otherwise print NO.


#include <iostream>
using namespace std;
int main() {
    int thresholdLimit,working;
    cout<<"Enter the value of threshold limit : ";
    cin>>thresholdLimit;
    
    cout<<"Enter the value of working : ";
    cin>>working;

    if(working > thresholdLimit) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}


// Output: 7 9
//         Yes