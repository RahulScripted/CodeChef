// In Chefland, a valid phone number consists of 5 digits with no leading zeros. Chef went to a store and purchased N items, where the cost of each item is X. Find whether the total bill is equivalent to a valid phone number.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfItems,costOfEachItem;
        
        cout<<"Enter the no. of items : ";
        cin>>noOfItems;
        
        cout<<"Enter the cost of each items : ";
        cin>>costOfEachItem;

        if((noOfItems * costOfEachItem) > 9999 && (noOfItems * costOfEachItem) <= 99999) cout<<"The total bill is equivalent to a valid phone number"<<endl;

        else cout<<"The total bill is not equivalent to a valid phone number"<<endl;
    }
}