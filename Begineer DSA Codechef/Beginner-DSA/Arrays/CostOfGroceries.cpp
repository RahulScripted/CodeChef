// Chef visited a grocery store for fresh supplies. There are N items in the store where the ith item has a freshness value Ai and cost Bi. Chef has decided to purchase all the items having a freshness value greater than equal to X. Find the total cost of the groceries Chef buys.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length,freshnessValue;
        cout<<"Enter the length of an array : ";
        cin>>length;

        cout<<"Enter the freshness value : ";
        cin>>freshnessValue;

        int freshnessList[length],cost[length];
        for(int i = 0;i < length;i++){
            cout<<"Enter the freshness of "<<(i + 1)<<"th position : ";
            cin>>freshnessList[i];
        }

        for(int i = 0;i < length;i++){
            cout<<"Enter the cost of "<<(i + 1)<<"th position : ";
            cin>>cost[i];
        }

        int totalBill = 0;
        for(int i = 0;i < length;i++){
            if(freshnessList[i] >= freshnessValue) totalBill += cost[i];
        }

        cout<<"The total cost of the groceries Chef buys will be : "<<totalBill<<endl;
    }
}