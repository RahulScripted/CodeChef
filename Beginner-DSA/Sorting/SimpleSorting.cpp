// Given a list of numbers, you have to sort them in non decreasing order.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length : ";
    cin>>length;

    int arr[length];
    for(int i = 0;i < length;i++){
        cout<<"Enter the value of "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }

    sort(arr,arr + length);
    cout<<"After sorting : ";
    for(int i = 0;i < length;i++){
        cout<<arr[i]<<" ";
    }
}