// Finally, after purchasing a water cooler during the April long challenge, Chef noticed that his water cooler requires 2 liters of water to cool for one hour.How much water (in liters) would be required by the cooler to cool for N hours?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfHours;
        cout<<"Enter the no. of hours : ";
        cin>>noOfHours;
        cout<<"No. of water needed : "<<(2 * noOfHours)<<" liter"<<endl;
    }
}