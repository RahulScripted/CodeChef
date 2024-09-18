// You are given an array A of size N, find and print all the peak elements in the array. A peak element is one which is strictly greater than any of its adjacent elements. If there is no peak element in an array, print -1.


#include <iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length of an array : ";
    cin>>length;

    int arr[length];
    for(int i = 0;i < length;i++){
        cout<<"Enter the value for "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }

    bool flag = false;
    cout<<"Peak elements are : ";
    if(arr[0] > arr[1]){
        flag = true;
        cout<<arr[0]<<" ";
    }

    for(int i = 1;i < (length - 1);i++){
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
            cout<<arr[i]<<" ";
            flag = true;
        }
    }

    if(arr[length - 1] > arr[length - 2]){
        flag = true;
        cout<<arr[length - 1]<<" ";
    }

    if(length == 1){
        cout<<arr[0]<<" ";
        flag = true;
    }

    if(flag == false) cout<<-1;
    cout<<endl;
}