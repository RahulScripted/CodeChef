// In Chefland, there are N houses numbered from 1 to N, ith house has a defense system having strength Ai.Chef suspects a bomb drop on one of the houses very soon. A bomb with attack strength X can destroy the ith house, if the defense system of the ith house Ai, is strictly less than X. Also, when the ith house is destroyed due to the bomb, all houses with indices j such that 1 ≤ j < i get destroyed as well irrespective of their defense system. Given one bomb with attack strength X, find the maximum number of houses that can get destroyed.


#include <iostream>
#include <climits>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfHouse,strengthOfBomb;
        cout<<"Enter the no. of house : ";
        cin>>noOfHouse;

        cout<<"Enter the strength of bomb : ";
        cin>>strengthOfBomb;

        int idx = 0;
        int arr[noOfHouse];
        for(int i = 1;i <= noOfHouse;i++){
            cout<<"Enter the value for "<<i<<"th position : ";
            cin>>arr[i];
            if(arr[i] < strengthOfBomb) idx = i;
        }

        cout<<"The maximum number of houses that can get destroyed will be : "<<idx<<endl;
    }
}