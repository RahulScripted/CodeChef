// You are given two sorted arrays A and B of size N and M respectively. You need to merge these two arrays and keep the final array sorted.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int lengthOfFirstSortedArray,lengthOfSecondSortedArray;
    cout<<"Enter the length of the first sorted array : ";
    cin>>lengthOfFirstSortedArray;

    cout<<"Enter the length of the second sorted array : ";
    cin>>lengthOfSecondSortedArray;

    int firstArray[lengthOfFirstSortedArray],secondArray[lengthOfSecondSortedArray];
    for(int i = 0;i < lengthOfFirstSortedArray;i++){
         cout<<"Enter the value for "<<(i + 1)<<"th position in first array : ";
        cin>>firstArray[i];
    }

    for(int i = 0;i < lengthOfSecondSortedArray;i++){
        cout<<"Enter the value for "<<(i + 1)<<"th position in second array : ";
        cin>>secondArray[i];
    }

    int mergeArray[lengthOfFirstSortedArray + lengthOfSecondSortedArray];
    int i = 0,j = 0,k = 0;
    while(i < lengthOfFirstSortedArray && j < lengthOfSecondSortedArray){
        if(firstArray[i] < secondArray[j]) mergeArray[k++] = firstArray[i++];
        else mergeArray[k++] = secondArray[j++];
    }

    while(i < lengthOfFirstSortedArray) mergeArray[k++] = firstArray[i++];

    while(j < lengthOfSecondSortedArray) mergeArray[k++] = secondArray[j++];

    cout<<"After merging 2 array : ";
    for(int i = 0;i < (lengthOfFirstSortedArray + lengthOfSecondSortedArray);i++) cout<<mergeArray[i]<<" ";
}