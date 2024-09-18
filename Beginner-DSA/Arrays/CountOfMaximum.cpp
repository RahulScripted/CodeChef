// Given an array A of length N, your task is to find the element which repeats in A maximum number of times as well as the corresponding count. In case of ties, choose the smaller element first.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of an array : ";
        cin>>length;

        int arr[length];
        map<int,int>freq;
        for(int i = 0;i < length;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            freq[arr[i]]++;
        }

        int maximumCount = 0,resultIndex = INT_MAX;
        for(auto p : freq){
            if(p.second > maximumCount || (p.second == maximumCount && p.first < resultIndex)){
                maximumCount = p.second;
                resultIndex = p.first;
            }
        }

        cout<<"Frequency of "<<resultIndex<<" is : "<<maximumCount<<endl;
    }
}