// Write a program to input the length and all the elements of an array, then calculate and print the sum and product of its elements.


#include <iostream>
using namespace std;
int main() {
    int size;
    // cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    for(int i = 0;i < size;i++){
        // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }
    int sum = 0,mul = 1;
    for(int i = 0;i < size;i++){
        sum += arr[i];
        mul *= arr[i];
    }
    // cout<<"Sum and multiplication will be : ";
    cout<<sum<<" "<<mul;
}
