// Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day. Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.


#include <iostream>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
        int waterConsumption;
        // cout<<"Enter the water consumption By Chef : ";
        cin>>waterConsumption;
        if(waterConsumption >= 2000) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}



// Output: 1
//        2002
//        Yes