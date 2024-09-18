// Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy chocolates for Chefina where each chocolate costs Z rupees. Find the maximum number of chocolates that Chef can buy for Chefina.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOf5Rupee,noOf10Rupee,CostOfEachChocolate;
        
        cout<<"Enter the no. of 5 rupee Chef have : ";
        cin>>noOf5Rupee;
        
        cout<<"Enter the no. of 10 rupee Chef have : ";
        cin>>noOf10Rupee;

        cout<<"Enter the cost of each chocolate : ";
        cin>>CostOfEachChocolate;

        cout<<"The maximum number of chocolates that Chef can buy for Chefina will be : "<<((noOf10Rupee * 10) + (noOf5Rupee * 5)) / CostOfEachChocolate<<endl;
    }
}