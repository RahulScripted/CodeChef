// You are given an array A of size N and an element X. Your task is to find whether the array A contains the element X or not.


#include <iostream>
using namespace std;
int main(){
    int length,targetElement;
    cout<<"Enter the length of an array : ";
    cin>>length;

    cout<<"Enter the value of target element : ";
    cin>>targetElement;

    int arr[length];
    for(int i = 0;i < length;i++){
        cout<<"Enter the value for "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }

    bool flag = false;
    for(int i = 0;i < length;i++){
        if(arr[i] == targetElement) flag = true;
    }

    if(flag == true) cout<<"Yes, Element is found"<<endl;
    else cout<<"No, Element is not found"<<endl;
}